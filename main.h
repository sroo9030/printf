#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>

/* Functions Prototype*/
int _putchar(char c);
int _printf(const char *format, ...);
int _specifier(const char *s, va_list args, int count);
int print_char(va_list args);
int print_string(va_list args, int n);

#endif
