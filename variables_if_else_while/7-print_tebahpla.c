#include<stdio.h>

/**
 * main - prints the lowercase alphabet in reverse,
 * followed by a new line.
 *
 * Return: Always 0
 *
 */

int main(void)
{
	int miror;

	for (miror = 'z'; miror >= 'a'; miror--)
		putchar(miror);
	putchar('\n');
	return (0);
}
