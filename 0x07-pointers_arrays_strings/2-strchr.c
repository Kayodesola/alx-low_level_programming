#include "main.h"
/**
 *_strchr - returns pointer at first occurrence of c in string s
 *@s: string
 *@c: char to look for and return
 *Return: Always 0 (success)
 */
char *_strchr(char *s, char c)
{
	int i = 0;

	for (; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
			return (&s[i]);
	}
	return (0);
}
