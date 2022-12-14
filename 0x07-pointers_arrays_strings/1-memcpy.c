#include "main.h"
#include <stddef.h>

/**
 * _memcpy - copies @n bytes from the memory area pointed
 * to by @src into that pointed to by @dest
 * @dest: a pointer to the memory area to copy @src into
 * @src: the source buffer to copy character from
 * @n: The number of bytes to copy from @srx
 *
 * Return: A pointer to the destination buffer @dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int index;
	char *destination = dest;
	char *source = src;

	for (index = 0; index < n; index++)
		destination[index] = source[index];
	return (dest);
}
