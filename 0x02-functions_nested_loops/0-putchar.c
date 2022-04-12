#include <stdio.h>
#include <main.h>
/**
 * main - Entry point
 * @void: no argument
 * Return: 0 Always (success/correct)
 */
 int main(void)
 {
 char i[] = "_putchar";
 int c;
 for (c = 0; c < 8; c++)
 {
 _putchar(i[c]);
 }
 _putchar('\n');
 return (0);
 }
