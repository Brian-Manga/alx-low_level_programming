#include <stdio.h>
#include <stdlib.h>

/**
 * main - a program that prints its name, followed by a new line.
 *
 * @argc: Counts the number of parameters that go into main
 * @argv: Pointer of array of pointers containing strings entering main
 * Return: Always 0 (Success)
 */
int main(int argc, char **argv)
{
	if (argc > 0)
		printf("%s\n", argv[0]);
	return (0);
}
