#include "main.h"

/**
 * main - prints _putchar
 * Return: 0 on success.
*/
int main(void)
{
	char c[] = "putchar";
	int i;

	for (i = 0; i < 8; i++)
	{
		putchar(c[i]);
	}
	putchar('\n');
	return (0);
}
