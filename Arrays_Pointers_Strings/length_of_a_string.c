#include "main.h"
/**
 * _strleng - returns the length of a string
 * @s: pointer a
 * Return: the number of characters
 */

int _strleng(char *s)
{
	int count = 0;

	for (count = 0; s[count] != '\0'; count++)
		;
	return (count);
}
