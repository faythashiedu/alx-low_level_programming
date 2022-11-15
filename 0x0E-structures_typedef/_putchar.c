#include <unistd.h>

/**
 * _putchar - print out a charaacter
 * @c - char to be printed
 *
 * Return: On success 1
 * On error, -1
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
