# ElementalsLib

This is a simple C library that handles dynamic memory allocation and deallocation for elemental data types in C.

### Clone the repo

In your terminal:

```sh
git clone https://github.com/Mateo-Serrano-24504/ElementalsLib.git
cd ElementalsLib
```

### Requirements

To build either the library file, the tests, or both, you will need the following softwares:
- A **C compiler**
- **CMake**
- (Optional, but recommended) **Ninja**

The versions listed are suggestions for a smooth experience. The project may be compatible with other versions of these tools.

- **Compilers**
    - ```gcc```: 13.x or higher
    - ```g++```: 13.x or higher
    - ```clang```: 12.x or higher

- **CMake and Ninja**
    - ```CMake```: 3.22 or higher
    - ```Ninja```: 1.10 or higher

I recommend installing each piece of software from their respective official website.

- [gcc/g++ (with mingw-w64)](https://www.mingw-w64.org/downloads/)
- [Clang](https://releases.llvm.org/download.html)
- [CMake](https://cmake.org/download/)
- [Ninja](https://ninja-build.org/)

### Build and compile

Once in the `ElementalsLib/` folder, and having installed the required software, you can build either the tests, the library, or both. Firstly, make sure to create the build folder and move there:

```sh
mkdir build
cd build
```

You must now use *cmake*. If you decide to use Ninja, you must specify it as the generator. Also, you should specify a compiler; for example, if you use gcc, you can either set the path to its executable or just:

```sh
cmake -G "Ninja" -DCMAKE_C_COMPILER=gcc ..
```

As long as gcc is in your PATH. If you do not want to use Ninja, you can set the generator to *MinGW Makefiles* if you are on Windows, or to *Unix Makefiles* if you are on Linux. CMake can also detect the generator for you:

```sh
cmake -DCMAKE_C_COMPILER=gcc ..
```

Now, it is time to use Ninja (or *mingw32-make* or *make*, if you do not use Ninja):

```sh
ninja
```

If you only want to compile the tests:

```sh
ninja tests
```

This will create the `tests` binary file in `build/bin/`.

To compile only the library:

```sh
ninja elementals
```

This will create the `libelementals.a` file in `build/lib/`.