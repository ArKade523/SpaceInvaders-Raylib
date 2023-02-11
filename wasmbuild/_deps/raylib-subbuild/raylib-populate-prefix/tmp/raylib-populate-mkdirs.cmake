# Distributed under the OSI-approved BSD 3-Clause License.  See accompanying
# file Copyright.txt or https://cmake.org/licensing for details.

cmake_minimum_required(VERSION 3.5)

file(MAKE_DIRECTORY
  "/Users/kadeangell/Documents/Raylib/wasmbuild/_deps/raylib-src"
  "/Users/kadeangell/Documents/Raylib/wasmbuild/_deps/raylib-build"
  "/Users/kadeangell/Documents/Raylib/wasmbuild/_deps/raylib-subbuild/raylib-populate-prefix"
  "/Users/kadeangell/Documents/Raylib/wasmbuild/_deps/raylib-subbuild/raylib-populate-prefix/tmp"
  "/Users/kadeangell/Documents/Raylib/wasmbuild/_deps/raylib-subbuild/raylib-populate-prefix/src/raylib-populate-stamp"
  "/Users/kadeangell/Documents/Raylib/wasmbuild/_deps/raylib-subbuild/raylib-populate-prefix/src"
  "/Users/kadeangell/Documents/Raylib/wasmbuild/_deps/raylib-subbuild/raylib-populate-prefix/src/raylib-populate-stamp"
)

set(configSubDirs )
foreach(subDir IN LISTS configSubDirs)
    file(MAKE_DIRECTORY "/Users/kadeangell/Documents/Raylib/wasmbuild/_deps/raylib-subbuild/raylib-populate-prefix/src/raylib-populate-stamp/${subDir}")
endforeach()
if(cfgdir)
  file(MAKE_DIRECTORY "/Users/kadeangell/Documents/Raylib/wasmbuild/_deps/raylib-subbuild/raylib-populate-prefix/src/raylib-populate-stamp${cfgdir}") # cfgdir has leading slash
endif()
