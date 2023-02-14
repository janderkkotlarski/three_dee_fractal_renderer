CONFIG += c++17
QMAKE_CXXFLAGS += -std=c++17


# RAYLIB_PATH = C:\raylib
# High warnings levels
# -Werror
QMAKE_CXXFLAGS += -Wall -Wextra -Wshadow -Wnon-virtual-dtor -pedantic -Weffc++
QMAKE_CXXFLAGS += -static-libgcc -static-libstdc++

# QMAKE_CXX = C:/raylib/MinGW/bin/g++.exe
# QMAKE_LINK = C:/raylib/MinGW/bin/ld
# QMAKE_MAKEFILE = C:/raylib/MinGW/bin/mingw32-make.exe

# Allow debug and release mode
CONFIG += debug_and_release

# CONFIG += staticlib

# In release mode, turn on profiling
CONFIG(release, debug|release) {

  DEFINES += NDEBUG

# gprof
  QMAKE_CXXFLAGS += -pg
  QMAKE_LFLAGS += -pg
}

INCLUDEPATH += C:/raylib/raylib/src/externa/glfw
INCLUDEPATH += C:/raylib/raylib/src
INCLUDEPATH += C:/raylib/MinGW/bin
INCLUDEPATH += C:/raylib/raylib
INCLUDEPATH += C:/raylib

INCLUDEPATH += C:\raylib\raylib\src\externa\glfw
INCLUDEPATH += C:\raylib\raylib\src
INCLUDEPATH += C:\raylib\MinGW\bin
INCLUDEPATH += C:\raylib\raylib
INCLUDEPATH += C:\raylib\

INCLUDEPATH += C:/Dry/Source/ThirdParty/SDL/include

INCLUDEPATH += C:\SDL2-2.26.3\x86_64-w64-mingw32\include
INCLUDEPATH += C:\SDL2-2.26.3\x86_64-w64-mingw32\include\SDL2

LIBS += -lraylib -Iexternal -lopengl32 -lgdi32 -lwinmm
LIBS += -static -lpthread

LIBS += -LC:/raylib/raylib/src/externa/glfw
LIBS += -LC:/raylib/raylib/src
LIBS += -LC:/raylib/MinGW/bin
LIBS += -LC:/raylib/raylib
LIBS += -LC:/raylib

LIBS += -LC:\raylib\raylib\src\externa\glfw
LIBS += -LC:\raylib\raylib\src
LIBS += -LC:\raylib\MinGW\bin
LIBS += -LC:\raylib\raylib
LIBS += -LC:\raylib\

SOURCES += \
        imager.cpp \
        main.cpp \
        mandel_sdl2.cpp \
        mandelbrot_2d.cpp \
        video.cpp

HEADERS += \
  imager.h \
  mandel_sdl2.h \
  mandelbrot_2d.h \
  video.h
