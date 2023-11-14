#include "main.h"

/**
  * _printf - a function that produces output according to a format
  * @format: a character string
  *
  * Return: Always 0
  */
int _printf(const char *format, ...)
{
	unsigned int i = 0, j = 0;
	va_list args;
	f_tp formats[] = {{"c", print_char},
			{"s", print_string}};

	if (format == NULL || format[i] == '\0' ||
			(format[i] == '%' && format[i + 1] == '\0'))
		return (-1);

	va_start(args, format);
	while (format != NULL && format[i] != '\0')
	{
		j = 0;
		if (format[i] == '%')
		{
			if (format[i + 1] == 'c' || format[i + 1] == 's')
			{
				while (j < 2)
				{
					if (format[i + 1] == *formats[j].specifier)
						formats[j].f(args);
					j++;
				}
			}
			else if (format[i + 1] == '%')
				_putchar('%');
			else
			{
				_putchar(format[i]);
				_putchar(format[i + 1]);
			}
			i++;
		}
		else
			_putchar(format[i]);
		i++;
	}
	va_end(args);
	return (i);
}

