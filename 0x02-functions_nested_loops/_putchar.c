#include "main.h"
#include <unistd.h>

/**
 * main - A program that uses putchar
 *
 * Return: On Success 1
 */

int _putchar(char c)
{
	return(write(1, &c, 1));
}
