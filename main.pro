QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    aplicativos.cpp \
    cadastro.cpp \
    contas.cpp \
    email.cpp \
    lancnfe.cpp \
    main.cpp \
    mainwindow.cpp \
    nfe.cpp \
    orcamentos.cpp \
    produtos.cpp

HEADERS += \
    aplicativos.h \
    cadastro.h \
    contas.h \
    email.h \
    lancnfe.h \
    mainwindow.h \
    nfe.h \
    orcamentos.h \
    produtos.h

FORMS += \
    aplicativos.ui \
    cadastro.ui \
    contas.ui \
    email.ui \
    lancnfe.ui \
    mainwindow.ui \
    nfe.ui \
    orcamentos.ui \
    produtos.ui

TRANSLATIONS += \
    main_pt_BR.ts
CONFIG += lrelease
CONFIG += embed_translations

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
