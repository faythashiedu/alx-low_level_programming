#include "main.h"

/**
 * find_sqrt - find the sqrt
 * @num: num to be squared
 * @root: root to be tested
 *
 * Return: The square root
 */

int find_sqrt(int num, int root);
int _sqrt_recursion(int n);

int find_sqrt(int num, int root)
{
	if ((root * root) == num)
		return (root);
}
