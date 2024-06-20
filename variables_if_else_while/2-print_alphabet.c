#include <stdio.h>

/**
 * main - the alphabet in lowercase, followed by a new line.
 *
 * Return : Always 0
 *
 */

int main(void)
{
	int alpha;

	for (alpha = 'a'; alpha <= 'z'; alpha++)
		putchar(alpha);
	putchar('\n');
	return 0;
}
