#include "main.h"

/**
 * _strlen - a function that returns the length of a string
 * @s: char input
 * Return: length of the input string
 */
int _strlen(char *s)
{
	int i = 1,  length = 0;
	char pl = s[0];

	while (pl != '\0')
	{
		length++;
		pl = s[i++];
	}
	return (length);
}
