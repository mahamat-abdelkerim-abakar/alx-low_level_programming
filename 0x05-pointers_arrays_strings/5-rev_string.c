#include <stdio.h>
#include "main.h"

/**
 * rev_string - Reverses a string
 * @s: string to be reversed
 * Return: nothing
 */

void rev_string(char *s)
{
	int i, tmp, len = _strlen(s);

	for (i = 0; i < len / 2; i++)
	{
		tmp = *(s + i);
		*(s + i) = *(s + len - i - 1);
		*(s + len - i - 1) = tmp;
	}
}

/**
 * _strlen - returns the length of a string
 * @s: string
 * Return: the length of the given string
 */

int _strlen(char *s)
{
	int len = 0;

	while (*(s + len) != '\0')
		len++;

	return (len);
}


