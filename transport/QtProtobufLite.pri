# include in your Qt project file using include(yourpath/QtProtobufLite.pri)
QMAKE_CXXFLAGS += -pthread
DEFINES += "HAVE_PTHREAD=1"

INCLUDEPATH += -I$$PWD/../dependencies/include
LIBS += -L$$PWD/../dependencies/lib

CONFIG(release, debug|release) {
LIBS += -lprotobuf-lite
}
CONFIG(debug, debug|release) {
LIBS += -lprotobuf-lited
}

