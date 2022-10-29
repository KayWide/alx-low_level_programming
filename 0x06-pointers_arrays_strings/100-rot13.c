#include "main.h"

/**
 * rot13 - a function that encodes
 * @m: string to be checked
 * Return: string
 */

char *rot13(char *m)
{
	int k;
	int b;

	char *n = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char *c = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	{
		for (k = 0; m[k] != '\0'; k++)
		{
			for (b = 0; n[b] != '\0'; b++)
			{
				if (m[k] == n[b])
				{
					m[k] = c[b];
					break;
				}
			}
		}
	}
	return (m);
}
