cmake_minimum_required(VERSION 3.16)

project(dawdle_live VERSION 0.1 LANGUAGES CXX)

set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(Qt6 6.5 REQUIRED COMPONENTS Quick Core Widgets)

qt_standard_project_setup(REQUIRES 6.5)

include_directories(src)

set(SRC_TRAY_ICON
        src/tray_icon/base_tray_action.cpp
        src/tray_icon/base_tray_action.hpp
        src/tray_icon/exit_tray_action.cpp
        src/tray_icon/exit_tray_action.hpp)

set(SRC_APPLICATION
        src/application/application.hpp
        src/application/application.cpp)

set(SRC ${SRC_TRAY_ICON}
        ${SRC_APPLICATION}
        src/main.cpp)

qt_add_executable(appdawdle_live
        ${SRC}
)

qt_add_qml_module(appdawdle_live
        URI dawdle_live
        VERSION 1.0
        QML_FILES
        Main.qml
        RESOURCES res/resources.qrc
)

# Qt for iOS sets MACOSX_BUNDLE_GUI_IDENTIFIER automatically since Qt 6.1.
# If you are developing for iOS or macOS you should consider setting an
# explicit, fixed bundle identifier manually though.
set_target_properties(appdawdle_live PROPERTIES
        #    MACOSX_BUNDLE_GUI_IDENTIFIER com.example.appdawdle_live
        MACOSX_BUNDLE_BUNDLE_VERSION ${PROJECT_VERSION}
        MACOSX_BUNDLE_SHORT_VERSION_STRING ${PROJECT_VERSION_MAJOR}.${PROJECT_VERSION_MINOR}
        MACOSX_BUNDLE TRUE
        WIN32_EXECUTABLE TRUE
)

target_link_libraries(appdawdle_live
        PRIVATE Qt6::Quick Qt6::Core Qt6::Widgets
)

target_compile_features(appdawdle_live PRIVATE cxx_std_20)

include(GNUInstallDirs)
install(TARGETS appdawdle_live
        BUNDLE DESTINATION .
        LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
        RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
