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
int print_char(va_list args);
int print_string(va_list args);

/**
  * struct format_type - structure to identify the format
  * @specifier: define the format type
  * @f: a function pointer to print
  */
typedef struct format_type
{
	char *specifier;
	int (*f)(va_list args);
} f_tp;
#endif
