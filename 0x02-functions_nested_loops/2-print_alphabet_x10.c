#include "main.h"

/**
 * main - prints 10 times the alphabet
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char c;
	int i = 0;

	while (i < 10)
	{
		c = 'a';

		while (c <= 'z')
		{
			_putchar(c)
			c++;
		}
		_putchar('\n');
		i++;
	}
}
