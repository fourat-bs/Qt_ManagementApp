QT       += core gui
QT += sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# The following define makes your compiler emit warnings if you use
# any Qt feature that has been marked deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    affclient.cpp \
    affentite.cpp \
    affreservation.cpp \
    ajouterc.cpp \
    ajoutere.cpp \
    ajouterr.cpp \
    connexion.cpp \
    main.cpp \
    mainwindow.cpp \
    modifierc.cpp \
    modifiere.cpp \
    modifierr.cpp \
    supprimerc.cpp \
    supprimere.cpp \
    supprimerr.cpp \
    welcome.cpp

HEADERS += \
    affclient.h \
    affentite.h \
    affreservation.h \
    ajouterc.h \
    ajoutere.h \
    ajouterr.h \
    connexion.h \
    mainwindow.h \
    modifierc.h \
    modifiere.h \
    modifierr.h \
    supprimerc.h \
    supprimere.h \
    supprimerr.h \
    welcome.h

FORMS += \
    affclient.ui \
    affentite.ui \
    affreservation.ui \
    ajouterc.ui \
    ajoutere.ui \
    ajouterr.ui \
    mainwindow.ui \
    modifierc.ui \
    modifiere.ui \
    modifierr.ui \
    supprimerc.ui \
    supprimere.ui \
    supprimerr.ui \
    welcome.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    background.qrc
