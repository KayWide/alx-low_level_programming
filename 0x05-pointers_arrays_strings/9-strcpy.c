#include "main.h"

/**
 *_strcpy - copies string
 *@src: source string
 *@dest: destination string
 *Return: dest
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while ((*(dest + i) = *src++))
	{
		i++;
	}
	return (dest);
}
