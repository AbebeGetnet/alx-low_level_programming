#include <stdio.h>

/*
 * main reverse lower alphabets in reverse
 *
 * Return: always (success)
 */
int main(void)
{
	char b;

	for (b = 'z'; b >= 'a'; b--)
	{
		putchar(b);
	}

	putchar('\n');

	return (0);
}

