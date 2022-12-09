#include <stdio.h>
/*
 * Main: entry point
 * return : alawys 0
 */
int main(void)
{
	printf("Size of a char:%i byte(s)\n", sizeof(char));
	printf("Size of an in: %i byte(s)\n", sizeof(int));
	printf("Size of a long int: %i byte(s)\n", sizeof(long int));
	printf("Size of a long long int: %i byte(s)\n", sizeof(long long int));
	printf("size of float: %i byte(s)\n", sizeof(float));
	return (0);
}
