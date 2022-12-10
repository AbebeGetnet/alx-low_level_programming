#include <stdio.h>

/*
 * main print number digits
 *
 *turn : always (success)
 */
int main(void)
{
	int n;

	for (n = '0'; n <= 0; n++)
	{
		putchar(n);

		if (n != '9')
		{
			putchar(',');
			putchar(' ');
		}
	}

	putchar('\n');

	return (0);
}
