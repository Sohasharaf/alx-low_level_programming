#include "main.h"

/**
 * print_alphabet - check the code
 *
 * Return: void
 */

void  print_alphabet(void);
{
	char c;
	for (c = 'a'; c <= 'z'; c++)
	{
		puchar(c);
	}
	_puchar('\n');
}
