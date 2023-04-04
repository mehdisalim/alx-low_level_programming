#include "main.h"

/**
 *_memset - fills memory with a constant byte
 *created By: mehdi salim
 *Return: returns a pointer to the memory areq
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		s[i] = b;
		i++;
	}
	return (s);
}
