#include "main.h"

/**
 *  _memcpy - copies memory area.
 *  @src: memory area copied from
 *  @dest: memory are copied to
 *  @n: number of bytes
 *  Return: pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
