#include "main.h"
/**
 * _memset - fills memory area pointed to by s with constant byte b
 *@s: address of variable
 *@n: no of bytes to be changed
 *@b: input value
 *Return: Input of mem filled
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;


	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
