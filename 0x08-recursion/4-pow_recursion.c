#include "main.h"

/**
*_pow_recursion- function that returns the value of x raised to the power of y.
*@x: variable to be raised
*@y: variable to be raised
*
*Return: 0 or -1 - succes
*/

int _pow_recursion(int x, int y)
{
if (y < 0)
return (-1);
if (y == 0)
return (1);
return (x * _pow_recursion(x, y - 1));
}
