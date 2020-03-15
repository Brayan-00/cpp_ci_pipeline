cmake_minimum_required(VERSION 3.13.4)
project(calculator)

set(CMAKE_CXX_STANDARD 20)
include_directories(src)


add_subdirectory(src)
add_subdirectory(tst)
add_subdirectory(lib/googletest)


all:
mkdir build
gcc -Wall -O0 -fprofile-arcs -ftest-coverage -o build/counter src/counter.c

test:
./build/counter 1 2 3
LC_ALL=en gcov --branch-probabilities --branch-counts src/counter.c -o .

clean:
rm -rf build
rm -f *.gcda
rm -f *.gcno
rm -f *.gcov
rm -rf bw-output