# _printf

_printf is a function based on how printf works.

---
## Description

Just like the normal printf() function our function also takes formats and will print the output depending on the formats that you give it. It prints in real time, our function will count the printed characters and return the amount of characters printed, if it is successful, otherwise it will return -1.

---
## Formats supported by our function

You must use convertion specifiers so that our function knows what to print, the following list will show you the convertion specifiers supported by our function and what our function does with them.

* %c: Will print a single character.
* %s: Will print a string.
* %d: Will print a double.
* %i: Will print an integer.
* %%: Will print the % character. 

---

## How to use _printf

In order to use _printf you're going to have to include the "holberton.h" library in your main.c file and compile it alogside the scripts in our repo.

---

## Requirements

Our _printf function needs to be compiled on Ubuntu 14.04 LTS, with gcc 4.8.4 using the flags -Wall -Werror -Wextra and -pedantic.

---

*Developed by Cristian Pino and Juan Camilo Cadavid*