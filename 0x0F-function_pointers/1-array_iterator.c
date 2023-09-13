#include "function_pointers.h"
#include <stdio.h>

/**
* array_iterator - prints a function as a parameter on each element of an array
* @array: arry to be printed
* @action: pointer to the function being used
* @size: size of the arry to be printed
* Return 0 (success)
*/

void array_iterator(int *array, size_t size, void (*action)(int))
{
unsigned int i;

if (array == NULL || action == NULL)
return;

for (i = 0; i < size; i++)
{
action(array[i]);
}
}
