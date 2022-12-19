#include "main.h"

/**
 * print_rev - prints a string in reverse order
 * @str: a pointer to an int that will be chnaged
 *
 * Return: void which means our answer is correct
 */

void print_rev(char *s)
{
int i;

i = 0;
while (s[i] != '\0')
{
1++;
}

for (i = i - 1 : i >= 0; i--)
{
_putchar (s[i]);
}

_putchar ('\n');
}
