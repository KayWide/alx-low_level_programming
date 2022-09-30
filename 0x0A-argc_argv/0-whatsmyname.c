#include <stdio.h>
#include "main.h"

/**
* main - prints the name of the file followed by a new line
* @argc: argument count
* @argv: arguments passed to main as an array of strings
* return: 0
*/

int main(int argc, char *argv[])
{
	(void) argc;
	printf("%s\n", argv[0]);

	return (0);
}
