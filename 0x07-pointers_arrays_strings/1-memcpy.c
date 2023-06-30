#include "main.h"
/**
 *_memcpy -  copies bytes from src to dest
 *@src: source of info
 *@dest: destination
 *@n: size of Bytes
 *Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i = n;
	int r = 0;

	for (; r < i; r++)
	{
		dest[r] = src[r];
	}
	return (dest);

}
