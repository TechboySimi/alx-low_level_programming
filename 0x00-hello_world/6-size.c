#include <stdio.h>

int main(void)
{

	int i;
	double d;
	char c;
	float f;

	printf("The size of an int is: %lu.\n", (unsigned long)sizeof(i));
	printf("The size of a double is: %lu.\n", (unsigned long)sizeof(d));
	printf("The size of a C is: %lu.\n", (unsigned long)sizeof(c));
	printf("The size of a f is: %lu.\n", (unsigned long)sizeof(f));

	return (0);
}
