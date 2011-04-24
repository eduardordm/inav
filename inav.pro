# -------------------------------------------------
# Project created by QtCreator 2010-02-12T19:53:11
# -------------------------------------------------
QT += network \
    opengl \
    sql \
    multimedia
TARGET = inav
TEMPLATE = app
SOURCES += main.cpp \
    mainwindow.cpp \
    config/configdialog.cpp \
    widgets/canvas.cpp \
    widgets/info.cpp \
    nav/navinfo.cpp \
    widgets/qnavmap.cpp \
    device/serialgps.cpp \
    config/configdata.cpp \
    device/portlistener.cpp \
    nmea183/gpsentence.cpp \
    nmea183/gplistener.cpp \
    inav.cpp
HEADERS += mainwindow.h \
    config/configdialog.h \
    widgets/canvas.h \
    widgets/info.h \
    nav/navinfo.h \
    widgets/qnavmap.h \
    device/serialgps.h \
    config/configdata.h \
    device/portlistener.h \
    nmea183/gpsentence.h \
    nmea183/gplistener.h \
    inav.h
FORMS += mainwindow.ui \
    config/configdialog.ui
INCLUDEPATH += C:/qextserialport-1.2win-alpha/
QMAKE_LIBDIR += C:/qextserialport-1.2win-alpha/build
LIBS += -LC:/qextserialport-1.2win-alpha/build \
    -lqextserialportd
unix:DEFINES = _TTY_POSIX_
win32:DEFINES = _TTY_WIN_ \
    QWT_DLL \
    QT_DLL
