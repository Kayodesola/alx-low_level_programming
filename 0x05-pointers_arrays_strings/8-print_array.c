#include "main.h"
/**
 * print_array - a function that print a elements of an array
 * @a: array number
 * @n: is the number of elements of the array to be printed
 * Return: a and n inputs
 */
void print_array(int *a, int n)
{
int i;
for (i = 0; i < (n - 1); i++)
{
printf("%d, ", a[1]);
}
if (i == (n - 1))
{
printf("%d", a[n - 1]);
}
printf("\n");
}
