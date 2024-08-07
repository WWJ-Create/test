cmake_minimum_required(VERSION 3.10)
project(MyProject)

if(CMAKE_INSTALL_PREFIX_INITIALIZED_TO_DEFAULT)
  set(CMAKE_INSTALL_PREFIX ${PROJECT_SOURCE_DIR}/INSTALL CACHE PATH "Default prefix of install directories" FORCE)
endif()

set(CMAKE_INSTALL_RPATH ${CMAKE_INSTALL_PREFIX}/bin)
include_directories(${CMAKE_CURRENT_SOURCE_DIR}/include)
add_subdirectory(lib1)
add_executable(stu tea_stu.cc)

target_link_libraries(stu LIB1)



install(TARGETS  LIB1 stu
   
  RUNTIME       DESTINATION bin
  LIBRARY       DESTINATION bin
  ARCHIVE       DESTINATION bin
  PUBLIC_HEADER DESTINATION include
)
