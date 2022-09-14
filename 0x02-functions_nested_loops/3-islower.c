#include <stdio.h>
#include <ctype.h>
#include "main.h"

/**
 *_islower - Function for checking lowercase character.
 *@c: classifies lowercase character
 *Return: 1 if c is lowercase. Otherwise 0.
 */
int _islower(int c)
{
	if islower(c)
	{
	return (1);
	}
	else
	{
	return (0);
	}
}
