#include<stdio.h>

/**
 * main - prints all single digit numbers of base 10
 * starting from 0, followed by a new line.
 *
 * Return: Always 0
 *
 */

int main(void)
{
	char numberz;

	for (numberz = '0'; numberz <= '9'; numberz++)
		putchar(numberz);
	putchar('\n');
	return (0);
}
