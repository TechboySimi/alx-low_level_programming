#include "main.h"

/**
 * _strncat - a function that concatenates two strings
 *
 * @dest: an input string
 * @src: an input string
 * @n: an input integer
 * Return: A pointer to the resulting string
 */
char *strncat(char *dest, char *src, int n)
{
	int coun = 0;
	int counter = 0;

	while (dest[coun] != '\0')
	{
		coun++;
	}

	while (counter < n && src[counter] != '\0')
	{
		dest[coun] = src[counter];
		coun++;
		counter++;
	}
	return (dest);
}
