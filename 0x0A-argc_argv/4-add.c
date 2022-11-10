#include <stdio.h>
#include "main.h"
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * check_num - check the sting there are digit
 * @str: array str
 * Return: Always 0
 */

int check_num(char *str)
{
	/*Declaring variables*/
	unsigned int count;

	count = 0;
	while (count < strlen(str))
	{
		if (!isdigit(str[count]))
		{
			return (0);
		}
		count++;
	}
	return (1);
}

/**
 * main - print the name of program
 * @argc: count arg
 * @argv: arg
 *
 * Return: Alway 0
 */

int main(int argc, char *argv[])
{
	int count;
	int str_to_int;
	int sum = 0;

	count = 1;

	while (count < argc) /*goes through the whole aray*/
	{
		if (check_num(argv[count]))
		{
			str_to_int = atoi(argv[count]);
			/* atoi coverts string to int */
			sum += str_to_int;
		}
		else
		{
			printf("Error\n");
			return (1);
		}
		count++;
	}
	printf("%d\n", sum);

	return (0);
}

