#include <stdio.h>
#include "main.h"

/**
 * main - print out the name of the program
 * @argc: count arguements
 * @argv: arguments
 *
 * Return: Alway 0
 */

int main(int argc, char *argv[])
{
	(void) argv; /*ignore argv*/
	printf("%i\n", argc - 1);
	return (0);
}
