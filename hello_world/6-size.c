#include <stdio.h>

/**
 * main - Size is not grandeur, and territory does not make a nation
 *
 * Description: prints the size of various types
 *              on the computer it is compiled ans run on.
 *
 * Return: Always  0
*/


int main(void)
{
	printf("size of a char: %d byte(s)\n", (int) sizeof(char));
	printf("size of a int: %d byte(s)\n", (int) sizeof(int));
	printf("size of a long int: %d byte(s)\n", (int) sizeof(long int));
	printf("size of a long long int: %d byte(s)\n", (int) sizeof(long long int));
	printf("size of a float: %d byte(s)\n", (int) sizeof(float));
	return (0);
}
