#!/bin/sh

#Use like this: ./runtest.sh [c++ compiler] [c compiler]
#Ex: ./runtest.sh clang++-10 clang-10

echo "Delete Build/"
rm -dR Build/

echo ""
cmake -B Build/Debug -DCMAKE_BUILD_TYPE=Debug -DCMAKE_CXX_COMPILER="$1" -DCMAKE_C_COMPILER="$2" -G "Ninja"
cmake -B Build/Release -DCMAKE_BUILD_TYPE=Release -DCMAKE_CXX_COMPILER="$1" -DCMAKE_C_COMPILER="$2" -G "Ninja"

echo ""
cmake --build Build/Debug --config Debug --verbose
cmake --build Build/Release --config Release --verbose

echo ""
echo "Debug Symbols"
nm -gDC ./Build/Debug/libDynamicLibAPI.so | egrep '(Base|SomeProperty)'

echo ""
echo "Release Symbols"
nm -gDC ./Build/Release/libDynamicLibAPI.so | egrep '(Base|SomeProperty)'