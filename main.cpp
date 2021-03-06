#include <QtGui/QGuiApplication>
#include "qtquick2applicationviewer.h"
#include <QtQml>
#include "filehandeler.h"
#include "serialcom.h"
#include <QtQuick>
#include <QFuture>
#include <QtConcurrent/QtConcurrent>
#include <QDebug>

//Main function
int main(int argc, char *argv[])
{
    QGuiApplication app(argc, argv);
    QtQuick2ApplicationViewer viewer;

    qmlRegisterType<FileHandeler>("HandyEQ",1,0,"FileHandeler");
    qmlRegisterType<SerialCom>("HandyEQ",1,0,"SerialCom");

    viewer.setMainQmlFile(QStringLiteral("qml/HandyEQ/main.qml"));
    viewer.showExpanded();

    int temp = app.exec();

    return temp;
}

