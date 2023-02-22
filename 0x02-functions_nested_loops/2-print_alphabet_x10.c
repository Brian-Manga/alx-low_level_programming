#include "main.h"

/**
 *print_alphabet_x10- Entry point
 *Description - print alphabet
 *Return: Always 0 (success)
*/

void print_alphabet_x10(void)
{
	int a;
	char c;

	a = 10;

	while (a > 0)
	{
		for (c = 'a'; c <= 'z'; c++)
		{
			_putchar(c);
		}
		_putchar('\n');
		a--;
	}
}
