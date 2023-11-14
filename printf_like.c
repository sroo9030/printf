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
	int fd = 1;
	f_tp formats[] = {{"c", print_char}};

	va_start(args, format);
	while (format != NULL && format[i])
	{
		j = 0;
		if (format[i] == '%')
		{
			while (j < 1)
			{
				if (format[i + 1] == *formats[j].specifier)
					formats[j].f(fd, args);
				else
					write(fd, &(format[i + 1]), 1);
				j++;
			}
			i++;
		}
		else if ((format[i] >= 'a' && format[i] <= 'z') ||
				(format[i] >= 'A' && format[i] <= 'Z') ||
				format[i] == ' ' || format[i] == '[' ||
				format[i] == ']' || format[i] == ':' ||
				format[i] == '\'' || format[i] == '.')
			write(fd, &(format[i]), 1);
		i++;
	}
	va_end(args);
	putchar('\n');
	return (0);
}

/**
  * print_char - print a char type parameters
  * @args: a list of variadic arguments
  * @fd: an int parameter
  *
  * Return: Nothing
  */
void print_char(int fd, va_list args)
{
	int c = va_arg(args, int);

	write(fd, &c, sizeof(int));
}
