#include "main.h"

/**
  * _specifier - a function handle the conversion specifier
  * @s: a char type pointer
  * @args: a list of variadic arguments
  * @count: an int type counter
  *
  * Return: A counter
  */
int _specifier(const char *s, va_list args, int count)
{
	switch (*s)
	{
		case 'c':
			_putchar(va_arg(args, int));
			count++;
			break;
		case 's':
			print_string(args, count);
			count++;
			break;
		case '%':
			_putchar('%');
			count++;
			break;
		default:
			_putchar('%');
			_putchar(*s);
			count++;
	}
	return (count);
}
