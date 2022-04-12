#include "main.h"
/**
 * main - Entry point
 *
 * Return: 0 always (success/correct)
 */
void print_alpabet(void)
{
char c;
for (c = 'a'; c <= 'z'; c++)
{
_putchar(c);
}
_putchar('\n');
return (0);
}
