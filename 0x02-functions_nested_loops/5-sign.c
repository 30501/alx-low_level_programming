#include "main.h"
/**
 * print sign - checks for the sign of the number
 * @n takes in a character
 * Return 1 and print + if number is greater than zero, 0 and for 0, -1 and print - for less than zero
 */
int print_sign(int n)
{
if (n > 0)
{
-putchar('+');
return (1);
}
else if (n == 0)
{
_putchar('0');
return (0);
}
else
{
_putchar('-');
return (-1);
}
}
