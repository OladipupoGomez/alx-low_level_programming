#include "function_pointers.h"
#include <stdio.h>

/**
* int_index - returns index of integers and first element
* @array: array to be printed
* @size: number of elements in the array
* @cmp: function to compare values
* Return: 0 (success)
*/

int int_index(int *array, int size, int (*cmp)(int))
{
int i;

if (array == NULL || size <= 0 || cmp == NULL)
return (-1);

for (i = 0; i < size; i++)
{
if (cmp(array[i]))
return (i);
}
return (-1);
}
