#include "main.h"

/**
*_sqrt_recursion- function that returns the natural square root of a number.
*@n: natural square root number
*
*Return: 0 or -1 -success
*/

int _sqrt_recursion(int n)
{
if (n < 0)
return (-1);
if (n == 0)
return (1);
return (n * _sqrt_recursion(n - 1));
}
