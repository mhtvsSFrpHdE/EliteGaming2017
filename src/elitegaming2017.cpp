#include "elitegaming2017.h"

// Namespace Environment definition

// This method get the host program executable file location from Qt API,
// return it as result.
QString EliteGaming2017::Environment::getInstalledDirectory(){
    auto pathFromQtApi = QCoreApplication::applicationDirPath();

    return pathFromQtApi;
}

// Configure Qt to enable hi-dpi support or not.
void EliteGaming2017::Environment::setHighDpiScaling(bool behavior){
    Qt::ApplicationAttribute attr;
    if(behavior){
        attr = Qt::AA_EnableHighDpiScaling;
    }else{
        attr = Qt::AA_DisableHighDpiScaling;
    }

    QGuiApplication::setAttribute(attr);
}

// Namespace Type definition

// Convert wstring to QString
QString EliteGaming2017::Type::qString_fromWstring(wstring input){
    return QString::fromWCharArray(input.c_str());
}

// Convert QString to wstring
wstring EliteGaming2017::Type::wstring_fromQString(QString input){
    return input.toStdWString();
}
