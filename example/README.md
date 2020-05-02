LAPACK++ Example
================================================================================

This is designed as a minimal, standalone example to demonstrate
how to include and link with LAPACK++. This assumes that LAPACK++ has
been compiled and installed. There are two options:

## Option 1: Makefile

The Makefile must know the compiler used to compile LAPACK++,
CXXFLAGS, and LIBS. Set CXX to the compiler, either in your environment
or in the Makefile. For the flags, there are two more options:

a. Using pkg-config to get CXXFLAGS and LIBS for LAPACK++ (recommended).
pkg-config must be able to locate the lapack++ package. If it is installed
outside the default search path (see `pkg-config --variable pc_path pkg-config`),
it should be added to `$PKG_CONFIG_PATH`. For instance:
   
    export PKG_CONFIG_PATH=/usr/local/lapackpp/lib/pkgconfig  # for sh
    setenv PKG_CONFIG_PATH /usr/local/lapackpp/lib/pkgconfig  # for csh
    
b. Hard-code CXXFLAGS and LIBS for LAPACK++ in the Makefile.

Then, to build `example_gemm` using the Makefile, run:
    
    make
    
## Option 2: CMake

todo: CMake must know where LAPACK++ is installed.

Then, to build `example_gemm` using the CMakeLists.txt, run:

    mkdir build
    cd build
    cmake ..
    make