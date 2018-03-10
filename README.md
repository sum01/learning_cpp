# Learning C++

[![Codacy Badge](https://api.codacy.com/project/badge/Grade/0720f2cbb72c4c2a9f14e77f7dcf3500)](https://www.codacy.com/app/sum01/learning_cpp?utm_source=github.com&utm_medium=referral&utm_content=sum01/learning_cpp&utm_campaign=Badge_Grade)

Just a dumping ground for any C++ projects that I make while learning C++.

## Depdencies

`cmake`, and any compatible C++ compiler.

[templates](./templates/src/sum.hpp) requires Boost, but only if building Debug mode.\
If you're using a multi-config compiler like MSVC, then it's required regardless.

## Building

Run `cmake` on the root `CMakeLists.txt`, or `cd build` and `cmake ..`, then compile the makefile with your OS's compiler.

The individual projects can also be built alone, without using the root `CMakeLists.txt`, since each one has its own `CMakeLists.txt`.
