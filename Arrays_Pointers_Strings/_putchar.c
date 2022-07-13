#include <unistd.h>

/**
 * _putchar - fxn for printing characters to i/o
 * @c: The character to be printed by _putchar
 * Return: Success 1, on error -1 and errno is set.
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
