#include "main.h"

/**
  * _printf - a function that produces output according to a format
  * @format: a character string
  *
  * Return: Number of printed characters
  */
int _printf(const char *format, ...)
{
	int c = 0;
	va_list args;

	if (format == NULL ||
			(format[c] == '%' && format[c + 1] == '\0'))
		return (-1);

	va_start(args, format);
	while (*format != '\0')
	{
		if (*format == '%')
		{
			format++;
			c = _specifier(format, args, c);
			format++;
		}
		else
		{
			_putchar(*format);
			c++;
			format++;
		}
	}
	va_end(args);
	return (c);
}
