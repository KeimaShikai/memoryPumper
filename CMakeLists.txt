cmake_minimum_required( VERSION 3.0 )
project( pumper )

list( APPEND GAME_SOURCES "main.cpp" )

add_executable( pumper ${GAME_SOURCES} )
