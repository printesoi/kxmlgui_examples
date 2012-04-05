project(kxmlexample)

find_package(KDE4 REQUIRED)
include_directories(${KDE4_INCLUDES})

set(tutorial3_SRCS
  main.cpp
  mainwindow.cpp
  componenta.cpp
  componentb.cpp
)

kde4_add_executable(kxmlexample ${tutorial3_SRCS})

target_link_libraries(kxmlexample ${KDE4_KDEUI_LIBS})

install(TARGETS kxmlexample DESTINATION ${BIN_INSTALL_DIR})
install(FILES kxmlexampleui.rc
        DESTINATION  ${DATA_INSTALL_DIR}/kxmlexample)
install(FILES component_a.rc
        DESTINATION  ${DATA_INSTALL_DIR}/kxmlexample)
install(FILES component_b.rc
        DESTINATION  ${DATA_INSTALL_DIR}/kxmlexample)