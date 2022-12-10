#include <stdio.h>

/**
 *maint :print integers from 0 to 9
 *
 * Return : always (success)
 */
int main(void)
{
	char n;

	for (n = '0'; n <= '9'; n++)
	{
		putchar(n);
	}

	putchar('\n');

	return (0);
}
