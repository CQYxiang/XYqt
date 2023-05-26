QT       += core gui    #QT包含的块

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets #大于4版本以上，包含widget模块

CONFIG += c++17             #C++版本

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

TARGET = VVersion   #目标 生成的exe程序名称
TEMPLATE = app          #模板 应用程序模板


SOURCES += \    #源文件
    main.cpp \
    widget.cpp

HEADERS += \    #头文件
    widget.h

TRANSLATIONS += \
    0526_zh_CN.ts
CONFIG += lrelease
CONFIG += embed_translations

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
