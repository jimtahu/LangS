cmake_minimum_required(VERSION 2.8)

project(LangS)

find_package(BISON)
find_package(FLEX)

find_program(bison "bison")
find_program(flex "flex")

file(GLOB sources *.cpp)

add_custom_command(OUTPUT ${CMAKE_CURRENT_SOURCE_DIR}/LangS.tab.cpp 
                   DEPENDS LangS.ypp
		   WORKING_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}
		   COMMAND @bison@ -d ${CMAKE_CURRENT_SOURCE_DIR}/LangS.ypp VERBATIM)

add_custom_command(OUTPUT ${CMAKE_CURRENT_SOURCE_DIR}/LangS.yy.cpp 
                   DEPENDS LangS.l
		   WORKING_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}
		   COMMAND @flex@ -o ${CMAKE_CURRENT_SOURCE_DIR}/LangS.yy.cpp ${CMAKE_CURRENT_SOURCE_DIR}/LangS.l VERBATIM)

set_source_files_properties(LangS.tab.cpp PROPERTIES GENERATED True)
set_source_files_properties(LangS.tab.hpp PROPERTIES GENERATED True)
set_source_files_properties(LangS.yy.cpp PROPERTIES GENERATED True)


add_executable(LangS LangS.tab.cpp LangS.yy.cpp @sources@)

