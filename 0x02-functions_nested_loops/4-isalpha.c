#include "main.h"

/**
 * _isalpha - checks for alphabetic character
 *
 * Return: 1 if letter, else 0
*/

int _isalpha(int c)
{
	if (c >= 'A' && c <= 'z')
		if (c <= 'Z' || c <= 'a')
		{
			return (1);
		}
	return (0);
}
