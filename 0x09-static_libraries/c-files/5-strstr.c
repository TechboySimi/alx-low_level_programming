#include "main.h"
#include <stdio.h>

#include <stdio.h>

/**
 * _strstr - a function that locates a substring.
 * @haystack: an input string to search in
 * @needle: an input string to locate into string haystack
 * Return: a pointer to the beginning of the located substring,
 * or NULL if the substring id not found.
 */
char *_strstr(char *haystack, char *needle)
{
	int i = 0;
	int j = 0;
	char *tmp;

	if (needle[0] == '\0')
	{
		return (&haystack[0]);
	}

	while (haystack[i])
	{
		if (haystack[i] == needle[j])
		{
			tmp = &haystack[i];

			for (j = 1; needle[j]; j++)
			{
				i += 1;
				if (needle[j] == haystack[i])
				{
					if (needle[j + 1] == '\0')
						return (tmp);
				}
				else
				{
					j = 0;
					break;
				}
			}
		}
		else
			i++;
	}

	tmp = 0;
	return (tmp);
}
