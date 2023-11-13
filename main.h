#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>

/* Functions Prototype*/
int _printf(const char *format, ...);
void print_char(va_list args);

/**
  * struct format_type - structure to identify the format
  * @specifier: define the format type
  * @f: a function pointer to print
  */
typedef struct format_type
{
	char *specifier;
	void (*f)(va_list args);
} f_tp;
#endif
