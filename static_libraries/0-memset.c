#include <stddef.h>

/**
 * _memset - Fills the first n bytes of a memory area with the constant byte b.
 *
 * @s: A pointer to the memory area to be filled.
 * @b: The constant byte used for filling.
 * @n: The number of bytes to fill.
 *
 * Return: A pointer to the memory area s.
 */
char *_memset(char *s, char b, unsigned int n)
{
	char *p = s;

	while (n--)
	{
		*p++ = b;
	}

	return (s);
}

