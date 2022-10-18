#include <stdio.h>
#include <stdarg.h>
#include "main.h"
/**
 * _printf - printf function
 * @format: fixed parameter
 * Return: count
 */
int _printf(const char *format, ...)
{
	int i, count = 0;

	va_list ap;

	va_start(ap, format);

	while (format && format[i])
	{
		if (format[i] == '%')
		{
			switch (format[i + 1])
			{
				case 'c':
					count += _putchar(va_arg(ap, int));
					break;
				case 's':
					count += putstring(va_arg(ap, char *));
					break;
				case '%':
					_putchar('%');
					break;
				default:
				continue;
			}
			i = i + 2;
		}
		else
		{
			count = _putchar(format[i]);
			i++;
		}

	}
	va_end(ap);
	return (count);
}
