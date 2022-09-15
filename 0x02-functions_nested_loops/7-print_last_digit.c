#include "main.h"

/**
 *print_last_digit - print the last digit of a number
 *@n: int type number
 *Return: return value of last digit
 */

int print_last_digit(int)
{
	n = n % 10;
	if (n < 0)
	n = -n;
	_putchar(n + '0');
	return (n);
}
