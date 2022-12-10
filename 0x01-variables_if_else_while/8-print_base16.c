#include <stdio.h>

/*
 * main print base 16
 * return : always (success)
 */
int main(void)
{
	char alpha = '0';
	int i;

	for (i = 0; i <= 9; i++, alpha++)
		putchar(alpha);
	alpha = 'a';
	for (i = 0; i <= 5; i++, alpha++)
		putchar(alpha);
	putchar('\n');
	return (0);
}
