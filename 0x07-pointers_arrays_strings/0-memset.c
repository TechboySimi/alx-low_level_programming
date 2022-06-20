#include "main.h"
#include <string.h>

/**
 * _memset - function that fills memory with a constant byte
 * pointed to by s with the constant byte b
 * @s: pointer to the block of memory to fill
 * @b: this is the value to be set
 * @n: this is the number of bytes to set to the value
 * Return: pointer to s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int counter = 0;
/* while counter is less than n bytes given in main.c
 */
	while (counter < n)
	{
		/*s position should raise and be overwritten */
		s[counter] = b;
		counter++;
	}

	return (s);
}
