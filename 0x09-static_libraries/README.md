# Static libraries

Project done during. It aims to learn about static libraries in **C language**.

## Technologies
* Scripts written in Bash 4.3.11(1)
* C files are compiled using `gcc 4.8.4`
* C files are written according to the C90 standard
* Tested on Ubuntu 14.04 LTS

## Files
All of the following files are scripts and programs written in C:

| Filename | Description |
| -------- | ----------- |
| `libmy` | Static library that contains a lot of functions |
| `create_static_lib.sh` | Script that creates a static library called `libmy.a` from all the `.c` files that are in the current directory |
| `main.h` | Header file that contains all the prototypes of the used functions |
