#include "main.h"

/**
*print_rev - prints string in reverse
*@s: string to be printed in reverse
*
*Return: 0
*/

void print_rev(char *s)
{
	int count = 0;

	while (count >= 0)
	{
		if (s[count] == '\0')
			break;
		count++;
	}

	for (count--; count >= 0; count--)
		_putchar(s[count]);
	_putchar('\n');
}
