#include "function_pointers.h"
#include <stdio.h>

/**
* print_name - prints name
* @name: name to be addded (string)
* @f: function to the pointer
* Return 0 (success)
*/

void print_name(char *name, void (*f)(char *))
{
if (name == NULL || f == NULL)
return;

f(name);

}
