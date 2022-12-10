#include <stdio.h>

/**
 * main - a simple program that outputs 0-9 separated by commas
 *
 *Return : 0 on success
 */
int main(void)
{
	int n;

	for (n = 48; n < 58; n++)
	{
		putchar(n);

		if (n != 57)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
