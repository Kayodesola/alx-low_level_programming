#include "main.h"
/**
 *_strpbrk - locates occurrence of string s in accept
 *@s: string to locate
 *@accept: input string
 *Return: Always 0 (success)
 */
char *_strpbrk(char *s, char *accept)
{
	int k;

	while (*s)
	{
		for (k = 0; accept[k]; k++)
		{
			if (*s == accept[k])
				return (s);
		}
		s++;
	}
	return ('\0');
}
