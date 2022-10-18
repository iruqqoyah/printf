#include "main.h"

int putstring(char * string)
{
	int i, count = 0;

	for (i = 0; string[i] != '\0'; i++ )
	{
		count += _putchar(string[i]);
	}

	return count;
}
