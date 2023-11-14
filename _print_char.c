#include "main.h"

/**
  * print_char - print a char type parameters
  * @args: a list of variadic arguments
  *
  * Return: Nothing
  */
void print_char(va_list args)
{
	_putchar(va_arg(args, int));
}
