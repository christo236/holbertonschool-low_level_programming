#include "main.h"
/**
 * _isdigit - function that checks for uppercase character.
 *
 *@c: check a character.
 *
 * Return: 1 if uppercase else return 0 otherwise.
 *
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
		return (0);
}

