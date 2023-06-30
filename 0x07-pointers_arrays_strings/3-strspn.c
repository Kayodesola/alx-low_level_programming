#include "main.h"
/**
 * _strspn - checks the length of accept
 * @s: input
 * @accept: string
 * Return: Always 0
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int n = 0;
	int r = 0;

	while (*s)
	{
		for (; accept[r]; r++)
		{
			if (*s == accept[r])
			{
				n++;
				break;
			}
			else if (accept[r + 1] == '\0')
				return (n);
		}
		s++;
	}
	return (n);
}
