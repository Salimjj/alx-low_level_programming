#include "main.h"

/**
 * print_alphabet_x10 - send alphabet to the output
 *
 */
void print_alphabet_x10(void)
{
	int i = 0;
	int alp;

	while (i <= 9)
	{
	 alp = 'a';
	while (alp <= 'z')
	{
		_putchar(alp);
		alp++;

	}
		_putchar('\n');
		i++;
	}
}
