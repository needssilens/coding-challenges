#!/bin/sh
set -e
if test "$CONFIGURATION" = "Debug"; then :
  cd /Users/j1012505/Data/Learning/LearningCpp/WordCount/cmake_build
  make -f /Users/j1012505/Data/Learning/LearningCpp/WordCount/cmake_build/CMakeScripts/ReRunCMake.make
fi
if test "$CONFIGURATION" = "Release"; then :
  cd /Users/j1012505/Data/Learning/LearningCpp/WordCount/cmake_build
  make -f /Users/j1012505/Data/Learning/LearningCpp/WordCount/cmake_build/CMakeScripts/ReRunCMake.make
fi
if test "$CONFIGURATION" = "MinSizeRel"; then :
  cd /Users/j1012505/Data/Learning/LearningCpp/WordCount/cmake_build
  make -f /Users/j1012505/Data/Learning/LearningCpp/WordCount/cmake_build/CMakeScripts/ReRunCMake.make
fi
if test "$CONFIGURATION" = "RelWithDebInfo"; then :
  cd /Users/j1012505/Data/Learning/LearningCpp/WordCount/cmake_build
  make -f /Users/j1012505/Data/Learning/LearningCpp/WordCount/cmake_build/CMakeScripts/ReRunCMake.make
fi

