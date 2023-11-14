#include "main.h"

/**
  * print_string - print a string
  * @args: a list of variadic arguments
  *
  * Return: Nothing
  */
void print_string(va_list args)
{
	char *s = va_arg(args, char *);
	int i = 0;

	while (s[i] != '\0')
	{
		_putchar(s[i]);
		i++;
	}
}
