#include "main.h"

/**
 *_memcpy - copies memory area
 *created By: mehdi salim
 *Return: returns a pointer to des
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}