#include<stdio.h>
#include "main.h"

/**
*print_array - function that prints n elements of an array of integers,
*, followed by a new line.
*@a: array to be printed
*@n: number of elements to be printed
*
*Return: 0
*/

void print_array(int *a, int n)
{
	int i = 0;

	for (; i < n; i++)
	{
		printf("%d", *(a + i));
		if (i != (n - 1))
			printf(", ");
	}
	printf("\n");
}
