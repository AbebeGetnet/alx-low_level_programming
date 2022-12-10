#include <stdio.h>

/*
 * main print base 16
 * return : always (success)
 */
int main(void)
{
	char b;

	for (b = '0'; b <= 9; b++)
	{
		putchar(b);
	}

	for (b = 'a'; b <= 'z'; b++)
	{
		putchar(b);
	}

	for (b = 'a'; b < = 'f'; b++)
	{
		putchar(b);
	}

	putchar('\n');

	return (0);
}
