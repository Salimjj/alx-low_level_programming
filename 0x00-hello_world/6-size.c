#include <stdio.h>

int main(void)
{
	char sizeofchar;
	int sizeofint;
	long int sizeoflongint;
	long long int sizeofllint;
	float sizeoffloat;

	printf("Size of a char: %d byte(s)\n", sizeof(sizeofchar));
	printf("Size of an int: %d byte(s)\n", sizeof(sizeofint));
	printf("Size of a long int: %d byte(s)\n", sizeof(sizeoflongint));
	printf("Size of a long long int: %d byte(s)\n", sizeof(sizeofllint));
	printf("Size of a float: %d byte(s)\n", sizeof(sizeoffloat));
	return (0);
}
