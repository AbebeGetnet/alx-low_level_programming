#include "main.h"
#include <stdlib.h>
/*
 *Write a function that creates an array of chars, and initializes it with a specific char.
*/
char *create_array(unsigned int size, char c)
{
	char *array = malloc(size);
	if (size == 0 || array == 0)
		return (NULL);
	while (size--)
		array[size] =  c;
	return (array);
}
