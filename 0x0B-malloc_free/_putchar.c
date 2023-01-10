#include "main.h"
#include <unistd.h>

/**
 *write the character to the stdout
 * return 0
*/

int _putchar(char c)
{
	return (write(1, &c, 1));
}
