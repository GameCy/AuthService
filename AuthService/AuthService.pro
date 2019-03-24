QT -= gui
QT += network

CONFIG += c++11 console
CONFIG -= app_bundle

# The following define makes your compiler emit warnings if you use
# any Qt feature that has been marked deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

include($$PWD/../transport/transport.pri)
INCLUDEPATH += $$PWD/../transport

SOURCES += \
        main.cpp \
    qsslserver.cpp

HEADERS += \
    qsslserver.h

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

certificates.files = $$PWD/../certs/*.*
certificates.path = $$OUT_PWD
INSTALLS += certificates

# Copy certificates in executable folder
copydata.commands = $(COPY_DIR) $$PWD/../certs/server.p12 $$OUT_PWD/certs
first.depends = $(first) copydata
export(first.depends)
export(copydata.commands)
QMAKE_EXTRA_TARGETS += first copydata


DISTFILES += \
    messages.proto

