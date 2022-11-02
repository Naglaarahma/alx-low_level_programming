#include "main.h"
/**
 * _puts_recursion - prints a string, followed by a new line.
 * @s: string
 * Return: no return.
*/
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}
	_print_rev_recursion(s + 1);
	_putchar(*s);
}
