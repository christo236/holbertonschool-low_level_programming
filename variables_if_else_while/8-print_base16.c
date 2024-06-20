#include<stdio.h>

/**
 * main - prints all the numbers of base 16
 * in lowercase, followed by a new line.
 *
 * Return: Always 0
 *
 */

int main(void)
{

	char hexa[] = "0123456789abcdef";
	int i;

	for (i = '0'; i <= '16'; i++)
	{
		putchar(hexa[i]);
		putchar('\n');
	}
	return (0);
}

