#include "main.h"
#include <stdio.h>

/**
 * print_array - prints n elements in the array a
 * @a: array to print
 * @n: number of elements to print
 *
 * Return: void
 */
void puts_half(char *str)
{
	int j, i = 0;

	while (*(str + i))
		i++;
	j = i / 2;
	if (i % 2)
		 j += 1;
	while (j < i)
	{
		_putchar(*(str + j));
		j++;
	}
	_putchar('\n');
}

