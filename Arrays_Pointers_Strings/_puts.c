#include "main.h"
/**
 * _puts - prints the characters in a string and inserts \n
 * @str: a pointer to the strings 1st elemnent
 * Return: returns 0
 */

void _puts(char *str)
{
	int count = 0;

	for (count = 0; str[count] != '\0'; count++)
	{
		_putchar(str[count]);
	}
	_putchar("\n");

}
