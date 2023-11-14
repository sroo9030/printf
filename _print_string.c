#include "main.h"

/**
  * print_string - print a string
  * @args: a list of variadic arguments
  * @n: an int counter
  *
  * Return: number of printed characters
  */
int print_string(va_list args, int n)
{
	char *s = va_arg(args, char *);

	while (*s != '\0')
	{
		_putchar(*s);
		s++;
		n++;
	}
	return (n);
}
