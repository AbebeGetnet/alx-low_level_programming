#include <stdio.h>

/**
 * main -the intry point to print some letters of alphabet
 *
 * Return : always (success)
 */
int main(void)
{
	char b;

	for (b = 'a'; b <= 'z'; b++)
	{
		if (b != 'e' && b != 'q')
		{
			putchar(b);
		}
	}

	putchar('\n');

	return (0);
}
