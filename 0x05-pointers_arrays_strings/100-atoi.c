#include "main.h"
#include <stdio.h>

/**
 *_atoi - converts string to an integer
 *@s: pointer
 *Return: integer
 */

int _atoi(char *s)
{
	int i, a, b;

	i = a = 0;
	b = 1;

	for (i = 0; s[i]; i++)
	{
		if (s[i] == '-')
			b = -b;

		if ((s[i] >= '0') && (s[i] <= '9'))
			a = a * 10 + b * (s[i] - '0');

		else if (a != 0)
			break;
	}
		return (a);
}
