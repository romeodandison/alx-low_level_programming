#include "main.h"

/**
 * _memcpy - a function that copes memory area
 * @dest: memory where is stored
 * @src: memory where it is copied
 * @n: number of bytes
 *
 * Return: copied memory with n bytes changes
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int r = 0;
	int i = n;

	for (; r < i; r++)
	{
		dest[r] = src[r];
		n--;
	}
	return (dest);
}
