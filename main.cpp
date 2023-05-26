#include "widget.h"

#include <QApplication> //包含一个应用程序类的头文件
#include <QLocale>
#include <QTranslator>

int main(int argc, char *argv[])    //main程序入口 argc命令行变量个数 argv命令行变量的数组
{
    QApplication a(argc, argv);//应用程序对象，在QT中，应用程序对象有且仅有一个

    QTranslator translator;
    const QStringList uiLanguages = QLocale::system().uiLanguages();
    for (const QString &locale : uiLanguages) {
        const QString baseName = "0526_" + QLocale(locale).name();
        if (translator.load(":/i18n/" + baseName)) {
            a.installTranslator(&translator);
            break;
        }
    }
    Widget w;//窗口对象 Widget父类 ->QWidget
    w.show();//窗口对象 默认不显示 必须要调用show显示窗口
    return a.exec();   //让应用程序对象进入消息循环
}
