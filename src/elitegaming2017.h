#ifndef STUDIOLIB_QT_H
#define STUDIOLIB_QT_H

#include <QCoreApplication>
#include <QGuiApplication>
#include <string>

using namespace std;

namespace EliteGaming2017{
    namespace Environment{
        QString getInstalledDirectory();
        void setWorkingDirectory();
        void setHighDpiScaling(bool behavior);
    }
    namespace Type{
        QString qString_fromWstring(wstring input);
        wstring wstring_fromQString(QString input);
    }
}

#endif // STUDIOLIB_QT_H
