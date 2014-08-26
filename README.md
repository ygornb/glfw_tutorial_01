glfw_tutorial_01
================

Simple glfw example program.

First of all you will need to compile glfw3 lib and put the lib file in glfw3/lib directory and put the header files in glfw3/include/GLFW directory. if the directory don't exists you must create it in the workspace.

This project was compile on Debian 7.6 Wheezy and using Eclipse C/C++ kepler with gcc cross compiler version 4.8.2-5.

To compile glfw3 on debian machine you will need the following packages:

- download glfw3 source code for linux
- sudo apt-get install xorg-dev
- sudo apt-get install libglu1-mesa-dev
- sudo apt-get install cmake
- in the root directory type cmake .
- in the root directory type make
