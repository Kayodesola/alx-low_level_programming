#include <stdio.h>
#include "main.h"
/**
 * main - prints the number of arguments
 * @argc: no of arguments
 * @argv: array of arguments
 *
 * Return: Always 0 (success)
 */
int main(int argc, char *argv[])
{
	(void)argv;
	printf("%d\n", argc - 1);

	return (0);
}
