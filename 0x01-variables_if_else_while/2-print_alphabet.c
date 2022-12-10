#include <stdio.h>

/**
 * main- print alphabeti
 *
 * Return: Always (success)
 */
int main(void)
{
	char b;

	for (b = 'a'; b <= 'z'; b++)
		putchar(b);

	putchar('\n');
	return (0);
}
