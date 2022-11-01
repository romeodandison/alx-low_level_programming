#include "main.h"

/**
 * _memset - fills the first and bytes of the memory area pointed to by @s with the constant byte @c
 * @s: a pointer to the memory area to be filled
 * @c: the character to fill the memory area with
 * @n: the numeber of bytes to be filled
 * Return: a pointer to be filled memory area @s
 */
char *_memset(char *s, char b, unsigned int n);
{
	unsigned int index;
	unsigned char *memory = s, value = c;

	for (index = 0; index < n; index++)
		memory[index] = value;
	return (memory);
}
