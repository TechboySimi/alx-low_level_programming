#include "main.h"

/**
 * _abs - compute absolute value of an int
 * @n: int type number
 *
 * Return: Absolute value of the input number.
 */
int _abs(int n)
{
	if (n < 0)
	{
		return (n * -1);
	}
	else
	{
		return (n);
	}
}
