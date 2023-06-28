#include <stdlib.h>
#include "main.h"
/**
 *_memset - sets the memory to 0
 *@s: memory area to be filled
 *@b: char to copy
 *@n: no of times to copy the char
 *
 *Return: pointer to s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}

/**
 *_calloc - allocates memory for an array
 *@nmemb: elements of array
 *@size: size of bytes of the elements
 *
 * Return: pointer to array
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	ptr = malloc(nmemb * size);
	if (ptr == NULL)
	{
		return (NULL);
	}
	_memset(ptr, 0, nmemb * size);
	return (ptr);
}
