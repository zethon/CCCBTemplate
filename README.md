# A C++, CMake, Conan, Boost Template

This simple project shows how to use CMake and Conan to create a C++ project that uses the boost framework.

## Building

Checkout the code and create a folder in the repository folder called `build`.

```
git clone https://github.com/zethon/CCCBTemplate.git
cd CCCBTemplate
mkdir build
cd build
conan install .. --build missing -s build_type=Debug
cmake .. -DCMAKE_BUILD_TYPE=Debug
cmake --build .
```
