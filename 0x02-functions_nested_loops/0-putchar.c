#include <main.h>
/**
 * main - Entry block
 * @void: no argument
 * Return: 0 Always (success/correct)
 */
 int main(void)
 {
 char i[] = "putchar";
 int c;
 for (c = 0; c < 8; c++)
 {
 _putchar(i[c]);
 }
 _putchar('\n');
 return (0);
 }
