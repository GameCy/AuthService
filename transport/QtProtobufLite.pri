# include in your Qt project file using include(yourpath/QtProtobufLite.pri)
PROTOBUFSRC = $$PWD/../dependencies/protobuf/src

QMAKE_CXXFLAGS += -pthread
DEFINES += "HAVE_PTHREAD=1"
INCLUDEPATH += $$PROTOBUFSRC
LIBS += -pthread

SOURCES += \
        $$PROTOBUFSRC/google/protobuf/arena.cc \
        $$PROTOBUFSRC/google/protobuf/extension_set.cc \
        $$PROTOBUFSRC/google/protobuf/generated_message_table_driven_lite.cc \
        $$PROTOBUFSRC/google/protobuf/generated_message_util.cc \
        $$PROTOBUFSRC/google/protobuf/implicit_weak_message.cc \
        $$PROTOBUFSRC/google/protobuf/parse_context.cc \
        $$PROTOBUFSRC/google/protobuf/io/coded_stream.cc \
        $$PROTOBUFSRC/google/protobuf/io/strtod.cc \
        $$PROTOBUFSRC/google/protobuf/io/zero_copy_stream.cc \
        $$PROTOBUFSRC/google/protobuf/io/zero_copy_stream_impl_lite.cc \
        $$PROTOBUFSRC/google/protobuf/message_lite.cc \
        $$PROTOBUFSRC/google/protobuf/repeated_field.cc \
        $$PROTOBUFSRC/google/protobuf/stubs/bytestream.cc \
        $$PROTOBUFSRC/google/protobuf/stubs/common.cc \
        $$PROTOBUFSRC/google/protobuf/stubs/int128.cc \
        $$PROTOBUFSRC/google/protobuf/stubs/io_win32.cc \
        $$PROTOBUFSRC/google/protobuf/stubs/status.cc \
        $$PROTOBUFSRC/google/protobuf/stubs/statusor.cc \
        $$PROTOBUFSRC/google/protobuf/stubs/stringpiece.cc \
        $$PROTOBUFSRC/google/protobuf/stubs/stringprintf.cc \
        $$PROTOBUFSRC/google/protobuf/stubs/structurally_valid.cc \
        $$PROTOBUFSRC/google/protobuf/stubs/strutil.cc \
        $$PROTOBUFSRC/google/protobuf/stubs/time.cc \
        $$PROTOBUFSRC/google/protobuf/wire_format_lite.cc

HEADERS += \
        $$PROTOBUFSRC/google/protobuf/arena.h \
        $$PROTOBUFSRC/google/protobuf/arenastring.h \
        $$PROTOBUFSRC/google/protobuf/extension_set.h \
        $$PROTOBUFSRC/google/protobuf/generated_message_util.h \
        $$PROTOBUFSRC/google/protobuf/implicit_weak_message.h \
        $$PROTOBUFSRC/google/protobuf/parse_context.h \
        $$PROTOBUFSRC/google/protobuf/io/coded_stream.h \
        $$PROTOBUFSRC/google/protobuf/io/strtod.h \
        $$PROTOBUFSRC/google/protobuf/io/zero_copy_stream.h \
        $$PROTOBUFSRC/google/protobuf/io/zero_copy_stream_impl_lite.h \
        $$PROTOBUFSRC/google/protobuf/message_lite.h \
        $$PROTOBUFSRC/google/protobuf/repeated_field.h \
        $$PROTOBUFSRC/google/protobuf/stubs/bytestream.h \
        $$PROTOBUFSRC/google/protobuf/stubs/common.h \
        $$PROTOBUFSRC/google/protobuf/stubs/int128.h \
        $$PROTOBUFSRC/google/protobuf/stubs/once.h \
        $$PROTOBUFSRC/google/protobuf/stubs/status.h \
        $$PROTOBUFSRC/google/protobuf/stubs/statusor.h \
        $$PROTOBUFSRC/google/protobuf/stubs/stringpiece.h \
        $$PROTOBUFSRC/google/protobuf/stubs/stringprintf.h \
        $$PROTOBUFSRC/google/protobuf/stubs/strutil.h \
        $$PROTOBUFSRC/google/protobuf/stubs/time.h \
        $$PROTOBUFSRC/google/protobuf/wire_format_lite.h

