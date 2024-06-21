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

	char lettre;
	int i;

	for (i = '0'; i <= '9'; i++)
		putchar(i);
	for (lettre = 'a'; lettre <= 'f'; lettre++)
		putchar(lettre);
	putchar('\n');
	return (0);
}
