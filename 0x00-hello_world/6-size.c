#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char c;
	int i;
	double d;
	float f;
	long double lf;
	printf("The size of a char is: %lu.\n", (unsigned long)sizeof(c));
	printf("The size of a int is: %lu.\n", (unsigned long)sizeof(i));
	printf("The size of a double is: %lu.\n", (unsigned long)sizeof(d));
	printf("The size of a f is: %lu.\n", (unsigned long)sizeof(f));
	printf("The size of a long double is: %lu.\n", (unsigned long)sizeof(lf));
	return (0);
}
