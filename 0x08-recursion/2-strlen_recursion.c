#include "main.h"

/**
*_strlen_recursion - function that returns the length of a string.
*@s: string length to be printed
*
*Return: 0 - success
*/

int _strlen_recursion(char *s)
{
	int longit = 0;

	if (*s)
	{
		longit++;
		longit += _strlen_recursion(s + 1);
	}

	return (longit);
}
