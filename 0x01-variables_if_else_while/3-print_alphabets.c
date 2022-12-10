#include <stdio.h>

/**
 * main- print the lower and uper case alphabetic
 *
 * Return : Always (success)
 */
int main(void)
{
	char b;

	for (b = 'a'; b <= 'z'; b++)
	{
		putchar(b);
	}

	for (b = 'A' b <= 'Z'; b++)
	{
		putchar(b);
	}

	putchar('\n');
	return (0);

}
