<p align="center">
<a href="https://www.holbertonschool.com/"><img src="https://s3.amazonaws.com/bloc-global-assets/almanac-assets/bootcamps/logos/000/002/676/original/Holberton-School.png?1467187334"/>
</a>
</p>

![Holberton](https://img.shields.io/badge/Holberton-Batch_3-red.svg)
![gcc](https://img.shields.io/badge/gcc-v4.8.4-lightgrey.svg)

# 0x17. C - Dynamic libraries #

* [Table of Contents](#table-of-contents)
	* [Author](#author)
	* [Description](#description)
	* [Objectives](#objectives)
	* [Compilation](#compilation)
	* [Requirements](#requirements)
	* [Tasks](#tasks)
	  * [Mandatory 0](#mandatory-0)
	  * [Mandatory 1](#mandatory-1)
	  * [Mandatory 2](#mandatory-2)

### Author ###
* Jeffrey Kanemitsu
    * [Github](https://github.com/jeffreykanemitsu)
    * [Twitter](https://twitter.com/canofmisosoup)

### Description ###
Understanding concepts of the low-level language.

<p align="center">
<a href="https://en.wikipedia.org/wiki/C_(programming_language)"><img src="http://www.unixstickers.com/image/cache/data/stickers/C/C%20language.sh-600x600.png"/>
</a>
</p>

### Objectives ###
* At the end of this project you are expected to be able to explain to anyone, without the help of Google:
	* What is a dymanic library, how does it work, how to create one, and how to use it
	* What is the environment variable `$LD_LIBRARY_PATH` and how to use it
	* What are the differences between static and shared libraries
	* Basic usage `nm`, `ldd`, `ldconfig`

### Compilation ###
Your programs and functions will be compiled with gcc 4.8.4 using the flags -Wall -Werror -Wextra and -pedantic

### Requirements ###
* Allowed editors: `vi`, `vim`, `emacs`
* All your files will be compiled on Ubuntu 14.04 LTS
* Your programs and functions will be compiled with `gcc 4.8.4` using the flags `-Wall -Werror -Wextra and -pedantic`
* All your files should end with a new line
* A `README.md` file, at the root of the folder of the project is mandatory
* Your code should use the `Betty` style. It will be checked using `betty-style.pl` and `betty-doc.pl`
* You are not allowed to use global variables
* No more than 5 functions per file
* You are not allowed to use the standard library. Any use of functions like `printf`, `puts`, etc... is forbidden
* You are allowed to use `_putchar`
* You don't have to push `_putchar.c`, we will use our file. If you do it won't be taken into account
* In the following examples, the `main.c` files are showed as examples. You can use them to test your functions, but you don't have to push them to your repo (if you do we won't take them into account). We will use our own `main.c` files at compilation. Our `main.c` files might be different from the one showed in the examples
* The prototypes of all your functions and the prototype of the function `_putchar` should be included in your header file called `holberton.h`
* Don't forget to push your header file
* The first line of all your files should be exactly #!/bin/bash

### Tasks ###
#### Mandatory 0 ####
0. **A library is not a luxury but one of the neccessities of life**
* Create the dynamic library libholberton.so containing all the functions listed below:
```
int _putchar(char c);
int _islower(int c);
int _isalpha(int c);
int _abs(int n);
int _isupper(int c);
int _isdigit(int c);
int _strlen(char *s);
void _puts(char *s);
char *_strcpy(char *dest, char *src);
int _atoi(char *s);
char *_strcat(char *dest, char *src);
char *_strncat(char *dest, char *src, int n);
char *_strncpy(char *dest, char *src, int n);
int _strcmp(char *s1, char *s2);
char *_memset(char *s, char b, unsigned int n);
char *_memcpy(char *dest, char *src, unsigned int n);
char *_strchr(char *s, char c);
unsigned int _strspn(char *s, char *accept);
char *_strpbrk(char *s, char *accept);
char *_strstr(char *haystack, char *needle);
```
* If you haven't coded all of the above functions create empty ones, with the right prototype.
Don't forget to push your `holberton.h` file in your repository, containing at least all the prototypes of the above functions.
#### Mandatory 1 ####
1. **Without libraries what have we? We have no past and no future**
* Create a script that creates a dynamic library called `liball.so` from all the `.c` files that are in the current directory.

#### Mandatory 2 ####
2. **Either write something worth reading or do something worth writing**
* Write a blog post describing the differences between static and dynamic libraries. It should cover:
	* Why using libraries in general
	* How do they work
	* How to create them (Linux only)
	* How to use them (Linux only)
	* What are the differences between static and dynamic libraries
	* What are the advantages and drawbacks of each of them
* Your posts should have examples and at least one picture, at the top. Public your blog post on Medium or LinkedIn, and share it at least on Twitter and LinkedIn.
