#include "main.h"

/**
 *is_char_in_str - checks if a character is in a string
 *created By: mehdi salim
 *Return: returns 1 if the character exists else returns 0
 */

int is_char_in_str(char *s, char c)
{
	unsigned int i = 0;

	while (s[i])
	{
		if (s[i] == c)
			return (1);
		i++;
	}
	return (0);
}

/**
 *_strpbrk - searches a string for any of a set of bytes
 *created By: mehdi salim
 *Return: Returns a pointer to the byte that matches
 */

char *_strpbrk(char *s, char *accept)
{
	unsigned int i = 0;

	while (s[i])
	{
		if (is_char_in_str(accept, s[i]))
			return (&s[i]);
		i++;
	}
	return (NULL);
}
