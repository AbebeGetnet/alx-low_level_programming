#include <stdio.h>

/*
 * mainprints all possible different combinations of two digits
 *
 * Return : always (success)
 */
int main(void)
{
	int i, j;

	j = i = '0';

	for (j = '0'; j <= '9'; j++)
	{
		for (i = '0'; i <= '9'; i++)
		{
			putchar(j);
			putchar(i);

			if ((j != '9') || (j == '9' && i != '9'))
			{
				putchar(',');
				putchar(' ');
			}
		}
	}

	putchar('\n');

	return (0);
}

