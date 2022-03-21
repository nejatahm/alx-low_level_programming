#include <stdio.h>
#include "main.h"
/**
 * print_array - Print an array up to n.
 * @a: the array of elements
 * @n: the number of elements of the array *a.
 */
void print_array(int *a, int n)
{
	int i;
#include <stdio.h>
#include "holberton.h"
/**
 * print_array - Print an array up to n.
 * @a: the array of elements
 * @n: the number of elements of the array *a.
 */
void print_array(int *a, int n)
{
	int i;
	i = 0;
	while (i < n)
	{
		printf("%d", a[i]);
		if (i != n - 1)
			printf(", ");
			printf("%d, ", a[i]);
		else
			printf("%d", a[i]);
		i++;
	}
	putchar('\n');
}
}
