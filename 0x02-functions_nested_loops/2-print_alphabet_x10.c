#include "main.h"

/**
 * print_alphabet_x10 - print the alphabet 10 times
 *
 * Return: Returns 0
*/

void print_alphabet_x10(void)
{
	int i;
	char c;

	i = '0';
	c = 'a';
	while (i <= '9')
	{
		while (c <= 'z')
		{
			_putchar(c);
			c++;
		}
		c = 'a';
		i++;
		_putchar('\n');
	}
}
