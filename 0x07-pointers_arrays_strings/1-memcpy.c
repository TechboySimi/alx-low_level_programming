#include "main.h"

/**
 * _memcpy - function to copy n bytes of the pointer src
 *
 * @dest: destination memory area where the string copied is going to be 
 * @src: string source that is gonna be copied n bytes
 * @n: number of bytes to be copied
 * Return: destination pointer
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int counter = 0;

	while (counter < n)
	{
		dest[counter] = *src++;
		counter++;
	}
	return (dest);
}
