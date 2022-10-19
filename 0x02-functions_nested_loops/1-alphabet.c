#include "main.h"

/**
 * print_alphabet - send alphabet to the output
 *
 */
void print_alphabet(void)
{
	int alp = 'a';

	while (alp <= 'z')
	{
		_putchar(alp);
		alp++;
	}
	_putchar('\n');
}
