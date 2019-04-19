include(QtProtobufLite.pri)

SOURCES += \
        $$PWD/MessageFactory.cpp \
        $$PWD/messages.pb.cc \
        $$PWD/Connection.cpp

HEADERS += \
        $$PWD/MessageFactory.h \
        $$PWD/messages.pb.h \
        $$PWD/Connection.h

DISTFILES += \
    $$PWD/Routes.csv \
    $$PWD/messages.proto

