#include <stdlib.h>
#include "main.h"
/**
 * _strchr - locates a character
 *
 * @s: string to check
 * @c: character to be checked
 *
 * Return: a pointer
 * @s. Return NULL if the character isn't found
 */

char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s != c)
			s++;
		else
			return (s);
	}
	if (c == '\0')
		return (s);

	return (NULL);
}
