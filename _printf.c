#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>
#include "main.h"

/**
 * _printf - printf function
 * @format: fixed parameter
 */

int _printf(const char *format, ...)
{
	int i;

	int count = 0;

	va_list ap;

	va_start(ap, format);

	while (format && format[i])
	{
		if (format[i] == '%')
			switch(format[i + 1])
			{
				case 'c':
					count +=_putchar(va_arg(format, int);
					break;

				case 's':
					count += putstring(va_arg(format, * char);


				case '%':
					_putchar('%');
					break;

				default:
				continue;
			}

			i = i + 2;


		else if (format[i] != '%')
			count = _putchar(format[i]);
			i++;


		}
	va_end(ap);

	return count;
}

					


