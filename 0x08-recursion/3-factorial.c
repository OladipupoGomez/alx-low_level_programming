#include "main.h"

/**
*factorial- function that returns the factorial of a given number.
*@n: given number to printed
*
*Return: 0 - factorial of n
*/

int factorial(int n)
{
if (n < 0)
return (-1);
if (n == 0)
return (1);
return (n * factorial(n - 1));
}
