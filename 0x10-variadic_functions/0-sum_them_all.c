#include <stdarg.h>
#include "variadic_functions.h"
/**
*sum_them_all - sums or adds up all parameters
*@n: number of variables to be summed up
*@...: variable numebers
*if n == 0
*Return 0
*/
int sum_them_all(const unsigned int n, ...)
{
va_list ap;
unsigned int i, sum = 0;

va_start(ap, n);

for (i = 0; i < n; i++)
sum += va_arg(ap, int);

va_end(ap);

return (sum);
}
