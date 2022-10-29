#include <stdio.h>

/**
* main-prints the number of arguments passed to it
* @argv:argument vector
* @argc:argument count
* Description: if no argument, print zero. If one or more, print the number.
* return:0-success, non-zero-fail
*/

int main(int argc, char *argv[])
{
	(void) argv;

	printf("%d\n", argc - 1);

	return (0);
}
