#include <stdio.h>

/**
* main - prints name followed by new line
* @argc: argument count
* @argv: argument string
* return - always zero
*/

int main(int argc, char* argv[])
{
	(void) argc;
	printf("%s\n", argv[0]);

	return 0;
}
