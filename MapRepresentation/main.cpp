#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include <qgsapplication.h>
#include "MapRepApp.h"

int main(int argc, char *argv[])
{
#if defined(Q_OS_WIN)
    QCoreApplication::setAttribute(Qt::AA_EnableHighDpiScaling);
#endif

	/*QGuiApplication app(argc, argv);
		QQmlApplicationEngine engine;
		engine.load(QUrl(QStringLiteral("qrc:/main.qml")));
		if (engine.rootObjects().isEmpty())
        return -1;*/
	QgsApplication a(argc, argv, true);
	QgsApplication::setPrefixPath("D:/OSGeo4W/apps/qgis", true);
	QgsApplication::initQgis();    //初始化QGIS应用
	MapRepApp mapApp;
	mapApp.show();
    return a.exec();
}