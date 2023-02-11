cmake_minimum_required(VERSION 3.25) # FetchContent is available in 3.11+
project(SpaceInvaders)

# Generate compile_commands.json
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

# Dependencies
set(RAYLIB_VERSION 4.2.0)
find_package(raylib ${RAYLIB_VERSION} QUIET) # QUIET or REQUIRED
if (NOT raylib_FOUND) # If there's none, fetch and build raylib
  include(FetchContent)
  FetchContent_Declare(
    raylib
    URL https://github.com/raysan5/raylib/archive/refs/tags/${RAYLIB_VERSION}.tar.gz
  )
  FetchContent_GetProperties(raylib)
  if (NOT raylib_POPULATED) # Have we downloaded raylib yet?
    set(FETCHCONTENT_QUIET NO)
    FetchContent_Populate(raylib)
    set(BUILD_EXAMPLES OFF CACHE BOOL "" FORCE) # don't build the supplied examples
    add_subdirectory(${raylib_SOURCE_DIR} ${raylib_BINARY_DIR})
  endif()
endif()

# Project Files
file (GLOB_RECURSE SOURCES CONFIGURE_DEPENDS "sources/*.cpp")
file (GLOB_RECURSE HEADERS CONFIGURE_DEPENDS "headers/*.h")

set (INCLUDE_DIRS "")
foreach (_headerFile ${HEADERS})
    get_filename_component(_dir ${_headerFile} PATH)
    list (APPEND INCLUDE_DIRS ${_dir})
endforeach()
list (REMOVE_DUPLICATES INCLUDE_DIRS)

add_executable(${PROJECT_NAME} ${SOURCES})
target_include_directories(${PROJECT_NAME} PUBLIC ${INCLUDE_DIRS})


target_link_libraries(${PROJECT_NAME} raylib)


# # Web Configurations
# if (${PLATFORM} STREQUAL "Web")
#     # Tell Emscripten to build an example.html file.
#     set_target_properties(${PROJECT_NAME} PROPERTIES SUFFIX ".html")
# endif()

# Checks if OSX and links appropriate frameworks (Only required on MacOS)
if (APPLE)
    target_link_libraries(${PROJECT_NAME} "-framework IOKit")
    target_link_libraries(${PROJECT_NAME} "-framework Cocoa")
    target_link_libraries(${PROJECT_NAME} "-framework OpenGL")
endif()