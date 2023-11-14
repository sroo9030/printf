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
	int i = 0;

	while (s[i] != '\0')
	{
		_putchar(s[i]);
		i++;
		n++;
	}
	return (n);
}
