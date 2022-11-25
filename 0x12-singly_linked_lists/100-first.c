#include <stdio.h>

/**
 * hare - printst the string
 * is executed before main()
 *
 */
void hare(void) __attribute__ ((constructor));

/**
 * hare - implementation of hare function
 */

void hare(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
