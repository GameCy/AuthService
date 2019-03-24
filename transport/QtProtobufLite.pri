# include in your Qt project file using include(yourpath/QtProtobufLite.pri)
PROTOBUFDIR = $$PWD/dependencies/protobuf/src

QMAKE_CXXFLAGS += -pthread
DEFINES += "HAVE_PTHREAD=1"
INCLUDEPATH += $$PWD
LIBS += -pthread

SOURCES += \
        $$PROTOBUFDIR/google/protobuf/arena.cc \
        $$PROTOBUFDIR/google/protobuf/extension_set.cc \
        $$PROTOBUFDIR/google/protobuf/generated_message_table_driven_lite.cc \
        $$PROTOBUFDIR/google/protobuf/generated_message_util.cc \
        $$PROTOBUFDIR/google/protobuf/implicit_weak_message.cc \
        $$PROTOBUFDIR/google/protobuf/parse_context.cc \
        $$PROTOBUFDIR/google/protobuf/io/coded_stream.cc \
        $$PROTOBUFDIR/google/protobuf/io/strtod.cc \
        $$PROTOBUFDIR/google/protobuf/io/zero_copy_stream.cc \
        $$PROTOBUFDIR/google/protobuf/io/zero_copy_stream_impl_lite.cc \
        $$PROTOBUFDIR/google/protobuf/message_lite.cc \
        $$PROTOBUFDIR/google/protobuf/repeated_field.cc \
        $$PROTOBUFDIR/google/protobuf/stubs/bytestream.cc \
        $$PROTOBUFDIR/google/protobuf/stubs/common.cc \
        $$PROTOBUFDIR/google/protobuf/stubs/int128.cc \
        $$PROTOBUFDIR/google/protobuf/stubs/io_win32.cc \
        $$PROTOBUFDIR/google/protobuf/stubs/status.cc \
        $$PROTOBUFDIR/google/protobuf/stubs/statusor.cc \
        $$PROTOBUFDIR/google/protobuf/stubs/stringpiece.cc \
        $$PROTOBUFDIR/google/protobuf/stubs/stringprintf.cc \
        $$PROTOBUFDIR/google/protobuf/stubs/structurally_valid.cc \
        $$PROTOBUFDIR/google/protobuf/stubs/strutil.cc \
        $$PROTOBUFDIR/google/protobuf/stubs/time.cc \
        $$PROTOBUFDIR/google/protobuf/wire_format_lite.cc

HEADERS += \
        $$PROTOBUFDIR/google/protobuf/arena.h \
        $$PROTOBUFDIR/google/protobuf/arenastring.h \
        $$PROTOBUFDIR/google/protobuf/extension_set.h \
        $$PROTOBUFDIR/google/protobuf/generated_message_util.h \
        $$PROTOBUFDIR/google/protobuf/implicit_weak_message.h \
        $$PROTOBUFDIR/google/protobuf/parse_context.h \
        $$PROTOBUFDIR/google/protobuf/io/coded_stream.h \
        $$PROTOBUFDIR/google/protobuf/io/strtod.h \
        $$PROTOBUFDIR/google/protobuf/io/zero_copy_stream.h \
        $$PROTOBUFDIR/google/protobuf/io/zero_copy_stream_impl_lite.h \
        $$PROTOBUFDIR/google/protobuf/message_lite.h \
        $$PROTOBUFDIR/google/protobuf/repeated_field.h \
        $$PROTOBUFDIR/google/protobuf/stubs/bytestream.h \
        $$PROTOBUFDIR/google/protobuf/stubs/common.h \
        $$PROTOBUFDIR/google/protobuf/stubs/int128.h \
        $$PROTOBUFDIR/google/protobuf/stubs/once.h \
        $$PROTOBUFDIR/google/protobuf/stubs/status.h \
        $$PROTOBUFDIR/google/protobuf/stubs/statusor.h \
        $$PROTOBUFDIR/google/protobuf/stubs/stringpiece.h \
        $$PROTOBUFDIR/google/protobuf/stubs/stringprintf.h \
        $$PROTOBUFDIR/google/protobuf/stubs/strutil.h \
        $$PROTOBUFDIR/google/protobuf/stubs/time.h \
        $$PROTOBUFDIR/google/protobuf/wire_format_lite.h

