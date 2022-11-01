#include "main.h"

/**
 * _memset - fills the first and bytes of the memory area pointed to by @s with the constant byte @c.
 * @s: a pointer to the memory area to be filled
 * @c: the character to fill the memory area with
 * @n: the numeber of bytes to be filled
 * Return: a pointer to be filled memory area @s
 */
void *_memset(void *s, int c, size_t n)
{
	unsigned int index;
	unsigned char *memory = s, value = c;

	for (indec = 0; index < n; index++)
		memory[index] = value;
	return (memory);
}
