/***************************************************************************
                    qgsproviderregistry.h  -  Singleton class for
                    registering data providers.
                             -------------------
    begin                : Sat Jan 10 2004
    copyright            : (C) 2004 by Gary E.Sherman
    email                : sherman at mrcc.com
 ***************************************************************************/

/***************************************************************************
 *                                                                         *
 *   This program is free software; you can redistribute it and/or modify  *
 *   it under the terms of the GNU General Public License as published by  *
 *   the Free Software Foundation; either version 2 of the License, or     *
 *   (at your option) any later version.                                   *
 *                                                                         *
 ***************************************************************************/

#ifndef QGSPROVIDERREGISTRY_H
#define QGSPROVIDERREGISTRY_H

#include <map>

#include <QDir>
#include <QLibrary>
#include <QString>

#include "qgsvectorlayerexporter.h"
#include "qgsdataprovider.h"
#include "qgis_core.h"
#include "qgis_sip.h"

class QgsProviderMetadata;
class QgsVectorLayer;
class QgsCoordinateReferenceSystem;
class QgsDataItemProvider;
class QgsDataItem;
class QgsRasterDataProvider;

/**
 * \ingroup core
  * A registry / canonical manager of data providers.
  *
  * This is a Singleton class that manages data provider access.
  *
  * Providers can be either loaded via libraries or native providers that
  * are included in the core QGIS installation and accessed through function pointers.
  *
  * Loaded providers may be restricted using QGIS_PROVIDER_FILE environment variable.
  * QGIS_PROVIDER_FILE is regexp pattern applied to provider file name (not provider key).
  * For example, if the variable is set to gdal|ogr|postgres it will load only providers gdal,
  * ogr and postgres.
*/
class CORE_EXPORT QgsProviderRegistry
{

  public:

    // TODO QGIS 4 - either move to QgsAbstractDataSourceWidget or remove altogether

    /**
     * Different ways a source select dialog can be used
     */
    enum WidgetMode
    {

      /**
       * Basic mode when the widget is used as a standalone dialog. Originally used
       * as GUI for individual "Add XXX layer" buttons in the main window.
       * Likely not used in live code anymore.
       */
      None,

      /**
       * Used for the data source manager dialog where the widget is embedded as the main content
       * for a particular tab.
       */
      Embedded,

      /**
       * Used by data items for QgsDataItem::paramWidget(). Originally used by QGIS Browser,
       * but does not seem to be in live code anymore. The mode was meant to avoid some actions
       * to keep the browser interface simple (supposedly).
       */
      Manager,
    };

    //! Means of accessing canonical single instance
    static QgsProviderRegistry *instance( const QString &pluginPath = QString() );

    ~QgsProviderRegistry();

    /**
     * Returns path for the library of the provider.
     *
     * If the provider uses direct provider function pointers instead of a library an empty string will
     * be returned.
     *
     * \deprecated QGIS 3.10 - providers may not need to be loaded from a library (empty string returned)
     */
    Q_DECL_DEPRECATED QString library( const QString &providerKey ) const SIP_DEPRECATED;

    //! Returns list of provider plugins found
    QString pluginList( bool asHtml = false ) const;

    /**
     * Returns the library directory where plugins are found.
     */
    QDir libraryDirectory() const;

    //! Sets library directory where to search for plugins
    void setLibraryDirectory( const QDir &path );

    /**
     * Creates a new instance of a provider.
     * \param providerKey identifier of the provider
     * \param dataSource  string containing data source for the provider
     * \param options provider options
     * \param flags provider flags since QGIS 3.16
     * \returns new instance of provider or NULLPTR on error
     *
     * \see createRasterDataProvider()
     */
    QgsDataProvider *createProvider( const QString &providerKey,
                                     const QString &dataSource,
                                     const QgsDataProvider::ProviderOptions &options = QgsDataProvider::ProviderOptions(),
                                     QgsDataProvider::ReadFlags flags = QgsDataProvider::ReadFlags() ) SIP_FACTORY;

    /**
     * Returns the provider capabilities
     * \param providerKey identifier of the provider
     * \since QGIS 2.6
     * \deprecated QGIS 3.10 (use instead capabilities() method of individual data item provider)
     */
    Q_DECL_DEPRECATED int providerCapabilities( const QString &providerKey ) const SIP_DEPRECATED;

    /**
     * Creates new empty vector layer
     * \note not available in Python bindings
     * \since QGIS 3.10
     */
    SIP_SKIP QgsVectorLayerExporter::ExportError createEmptyLayer( const QString &providerKey, const QString &uri, const QgsFields &fields, QgsWkbTypes::Type wkbType, const QgsCoordinateReferenceSystem &srs, bool overwrite, QMap<int, int> &oldToNewAttrIdxMap, QString &errorMessage, const QMap<QString, QVariant> *options );

    /**
     * Creates new instance of raster data provider
     *
     * \see createProvider()
     * \since QGIS 3.10
     */
    QgsRasterDataProvider *createRasterDataProvider(
      const QString &providerKey,
      const QString &uri,
      const QString &format,
      int nBands,
      Qgis::DataType type,
      int width, int height,
      double *geoTransform,
      const QgsCoordinateReferenceSystem &crs,
      const QStringList &createOptions = QStringList() ) SIP_FACTORY;

    /**
     * Returns list of raster pyramid resampling methods
     *
     * \since QGIS 3.10
     */
    QList<QPair<QString, QString> > pyramidResamplingMethods( const QString &providerKey );

    /**
     * Breaks a provider data source URI into its component paths (e.g. file path, layer name).
     * \param providerKey identifier of the provider
     * \param uri uri string
     * \returns map containing components. Standard components include "path", "layerName", "url".
     * \note this function may not be supported by all providers, an empty map will be returned in such case
     * \since QGIS 3.4
     */
    QVariantMap decodeUri( const QString &providerKey, const QString &uri );

    /**
     * Reassembles a provider data source URI from its component paths (e.g. file path, layer name).
     * \param providerKey identifier of the provider
     * \param parts parts as returned by decodeUri
     * \returns datasource uri string
     * \note this function may not be supported by all providers, an empty string will be returned in such case
     * \see decodeUri()
     * \since QGIS 3.12
     */
    QString encodeUri( const QString &providerKey, const QVariantMap &parts );

    /**
     * Returns a new widget for selecting layers from a provider.
     * Either the \a parent widget must be set or the caller becomes
     * responsible for deleting the returned widget.
     * \deprecated QGIS 3.10 - use QgsGui::sourceSelectProviderRegistry()->createDataSourceWidget() instead
     */
    Q_DECL_DEPRECATED QWidget *createSelectionWidget( const QString &providerKey, QWidget *parent = nullptr, Qt::WindowFlags fl = Qt::WindowFlags(), QgsProviderRegistry::WidgetMode widgetMode = QgsProviderRegistry::WidgetMode::None ) SIP_DEPRECATED;

    /**
     * Returns list of data item providers of the provider
     * \note Ownership of created data item providers is passed to the caller.
     * \since QGIS 3.10
     */
    QList< QgsDataItemProvider * > dataItemProviders( const QString &providerKey ) const SIP_FACTORY;

    /**
     * Lists stored layer styles in the provider defined by \a providerKey and \a uri
     * \returns -1 if not implemented by provider, otherwise number of styles stored
     * \since QGIS 3.10
     */
    int listStyles( const QString &providerKey,
                    const QString &uri,
                    QStringList &ids,
                    QStringList &names,
                    QStringList &descriptions,
                    QString &errCause );

    /**
     * Gets a layer style defined by \a styleId
     *
     * \since QGIS 3.10
     */
    QString getStyleById( const QString &providerKey,  const QString &uri, QString styleId, QString &errCause );

    /**
     * Deletes a layer style defined by \a styleId
     * \since QGIS 3.10
     */
    bool deleteStyleById( const QString &providerKey,  const QString &uri, QString styleId, QString &errCause );

    /**
     * Saves a layer style to provider
     *
     * \since QGIS 3.10
     */
    bool saveStyle( const QString &providerKey,  const QString &uri, const QString &qmlStyle, const QString &sldStyle,
                    const QString &styleName, const QString &styleDescription,
                    const QString &uiFileContent, bool useAsDefault, QString &errCause );

    /**
     * Loads a layer style defined by \a uri
     * \since QGIS 3.10
     */
    QString loadStyle( const QString &providerKey,  const QString &uri, QString &errCause );

    /**
     * Creates database by the provider on the path
     * \since QGIS 3.10
     */
    bool createDb( const QString &providerKey, const QString &dbPath, QString &errCause );

    /**
     * Returns new instance of transaction. Ownership is transferred to the caller
     * \since QGIS 3.10
     */
    QgsTransaction *createTransaction( const QString &providerKey, const QString &connString ) SIP_FACTORY;

    /**
     * Gets pointer to provider function
     *
     * \param providerKey identifier of the provider
     * \param functionName name of function
     * \returns pointer to function or NULLPTR on error. If the provider uses direct provider
     * function pointers instead of a library NULLPTR will be returned.
     *
     * \deprecated QGIS 3.10 - any provider functionality should be accessed through QgsProviderMetadata
     */
    Q_DECL_DEPRECATED QFunctionPointer function( const QString &providerKey, const QString &functionName ) SIP_DEPRECATED;

    /**
     * Returns a new QLibrary for the specified \a providerKey. Ownership of the returned
     * object is transferred to the caller and the caller is responsible for deleting it.
     *
     * If the provider uses direct provider function pointers instead of a library NULLPTR will
     * be returned.
     *
     * \deprecated QGIS 3.10 - providers may not need to be loaded from a library
     */
    Q_DECL_DEPRECATED QLibrary *createProviderLibrary( const QString &providerKey ) const SIP_FACTORY SIP_DEPRECATED;

    //! Returns list of available providers by their keys
    QStringList providerList() const;

    //! Returns metadata of the provider or NULLPTR if not found
    QgsProviderMetadata *providerMetadata( const QString &providerKey ) const;

    /**
     * \ingroup core
     *
     * Contains information pertaining to a candidate provider.
     *
     * \since QGIS 3.18
     */
    class CORE_EXPORT ProviderCandidateDetails
    {

      public:

        /**
         * Constructor for ProviderCandidateDetails, with the specified provider \a metadata and valid candidate \a layerTypes.
         */
        ProviderCandidateDetails( QgsProviderMetadata *metadata, const QList< QgsMapLayerType > &layerTypes )
          : mMetadata( metadata )
          , mLayerTypes( layerTypes )
        {}

        /**
         * Returns the candidate provider metadata.
         */
        QgsProviderMetadata *metadata() const { return mMetadata; }

        /**
         * Returns a list of map layer types which are valid options for opening the
         * target using this candidate provider.
         */
        QList<QgsMapLayerType> layerTypes() const { return mLayerTypes; }

#ifdef SIP_RUN
        SIP_PYOBJECT __repr__();
        % MethodCode
        QString str = QStringLiteral( "<QgsProviderRegistry.ProviderCandidateDetails: %1>" ).arg( sipCpp->metadata()->key() );
        sipRes = PyUnicode_FromString( str.toUtf8().constData() );
        % End
#endif

      private:
        QgsProviderMetadata *mMetadata = nullptr;

        QList< QgsMapLayerType > mLayerTypes;

    };

    /**
     * Returns the details for the preferred provider(s) for opening the specified \a uri.
     *
     * The preferred provider is determined by comparing the priority returned by
     * QgsProviderMetadata::priorityForUri() for all registered providers, and selecting
     * the provider with the largest non-zero priority.
     *
     * An empty list may be returned, which indicates that no providers are available which
     * returned a non-zero priority for the specified URI.
     *
     * In the case that multiple providers returned the same priority for the URI then
     * all of these providers will be returned.
     *
     * \see shouldDeferUriForOtherProviders()
     * \since QGIS 3.18
     */
    QList< QgsProviderRegistry::ProviderCandidateDetails > preferredProvidersForUri( const QString &uri ) const;

    /**
     * Returns TRUE if the provider with matching \a providerKey should defer handling of
     * the specified \a uri to another provider.
     *
     * This method tests whether any providers are listed as the preferred provider for \a uri
     * (see preferredProvidersForUri()), and if so tests whether the specified provider is
     * included in that preferred providers list. Returns TRUE only if the specified provider
     * is calculated as one of the preferred providers for the URI.
     *
     * In the case that there is no registered preferred provider for the URI then FALSE will be
     * returned, and the provider must use another metric to determine whether it should
     * handle the URI.
     *
     * \see preferredProvidersForUri()
     * \since QGIS 3.18
     */
    bool shouldDeferUriForOtherProviders( const QString &uri, const QString &providerKey ) const;

    /**
     * Returns TRUE if the specified \a uri is known by any registered provider to be something which should
     * be blocklisted from the QGIS interface, e.g. an internal detail only.
     *
     * Specifically, this method can be utilized by the browser panel to hide noisy internal details
     * for URIs which are known to be sidecar files only, such as ".aux.xml" files or ".shp.xml" files,
     * or the "ept-build.json" files which sit alongside Entwine "ept.json" point cloud sources.
     *
     * This method tests whether any of the registered providers return TRUE for the their
     * QgsProviderMetadata::uriIsBlocklisted() implementation for the specified URI.
     *
     * \since QGIS 3.18
     */
    bool uriIsBlocklisted( const QString &uri ) const;

    /**
     * Returns a file filter string for supported vector files.
     *
     * Returns a string suitable for a QFileDialog of vector file formats
     * supported by all data providers.
     *
     * \see fileRasterFilters()
     * \see fileMeshFilters()
     * \see filePointCloudFilters()
     */
    QString fileVectorFilters() const;

    /**
     * Returns a file filter string for supported raster files.
     *
     * Returns a string suitable for a QFileDialog of raster file formats
     * supported by all data providers.
     *
     * \note This replaces QgsRasterLayer::buildSupportedRasterFileFilter()
     *
     * \see fileVectorFilters()
     * \see fileMeshFilters()
     * \see filePointCloudFilters()
     */
    QString fileRasterFilters() const;

    /**
     * Returns a file filter string for supported mesh files.
     *
     * Returns a string suitable for a QFileDialog of mesh file formats
     * supported by all data providers.
     *
     * \see fileMeshDatasetFilters()
     * \see fileRasterFilters()
     * \see fileVectorFilters()
     * \see filePointCloudFilters()
     *
     * \since QGIS 3.6
     */
    QString fileMeshFilters() const;

    /**
     * Returns a file filter string for supported mesh dataset files.
     *
     * Returns a string suitable for a QFileDialog of mesh datasets file formats
     * supported by all data providers.
     *
     * \see fileMeshFilters()
     *
     * \since QGIS 3.6
     */
    QString fileMeshDatasetFilters() const;

    /**
     * Returns a file filter string for supported point clouds.
     *
     * Returns a string suitable for a QFileDialog of point cloud file formats
     * supported by all data providers.
     *
     * \see fileMeshFilters()
     * \see fileRasterFilters()
     * \see fileVectorFilters()
     *
     * \since QGIS 3.18
     */
    QString filePointCloudFilters() const;

    //! Returns a string containing the available database drivers
    QString databaseDrivers() const;
    //! Returns a string containing the available directory drivers
    QString directoryDrivers() const;
    //! Returns a string containing the available protocol drivers
    QString protocolDrivers() const;

    /**
     * \deprecated since QGIS 3.10 - does nothing - use QgsGui::providerGuiRegistry()
     */
    Q_DECL_DEPRECATED void registerGuis( QWidget *widget ) SIP_DEPRECATED;

    /**
     * \brief register a new vector data provider from its \a providerMetadata
     * \return TRUE on success, FALSE if a provider with the same key was already registered
     * \note ownership of the QgsProviderMetadata instance is transferred to the registry
     * \since QGIS 3.2
     */
    bool registerProvider( QgsProviderMetadata *providerMetadata SIP_TRANSFER );

    //! Type for data provider metadata associative container
    SIP_SKIP typedef std::map<QString, QgsProviderMetadata *> Providers;

  private:
    //! Ctor private since instance() creates it
    QgsProviderRegistry( const QString &pluginPath );

#ifdef SIP_RUN
    QgsProviderRegistry( const QString &pluginPath );
#endif

    void init();
    void clean();

    //! Associative container of provider metadata handles
    Providers mProviders;

    //! Directory in which provider plugins are installed
    QDir mLibraryDirectory;

    /**
     * File filter string for vector files
     *
     * Built once when registry is constructed by appending strings returned
     * from iteratively calling vectorFileFilter() for each visited data
     * provider.  The alternative would have been to do this each time
     * fileVectorFilters was invoked; instead we only have to build it the
     * one time.
     */
    QString mVectorFileFilters;

    /**
     * File filter string for raster files
     */
    QString mRasterFileFilters;

    /**
     * File filter string for raster files
     */
    QString mMeshFileFilters;

    /**
     * File filter string for raster files
     */
    QString mMeshDatasetFileFilters;

    /**
     * File filter string for point cloud files
     */
    QString mPointCloudFileFilters;

    /**
     * Available database drivers string for vector databases
     *
     * This is a string of form:
     * DriverNameToShow,DriverName;DriverNameToShow,DriverName;...
     */
    QString mDatabaseDrivers;

    /**
     * Available directory drivers string for vector databases
     * This is a string of form:
     * DriverNameToShow,DriverName;DriverNameToShow,DriverName;...
     */
    QString mDirectoryDrivers;

    /**
     * Available protocol drivers string for vector databases
     *
     * This is a string of form:
     * DriverNameToShow,DriverName;DriverNameToShow,DriverName;...
     */
    QString mProtocolDrivers;

    /**
     * Returns TRUE if registry instance exists.
     */
    static bool exists();

    friend class QgsApplication;

}; // class QgsProviderRegistry

#endif //QGSPROVIDERREGISTRY_H

