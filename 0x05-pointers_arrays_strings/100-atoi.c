#include "main.h"
/**
 * _atoi - converts a string to an integer
 * @s: string to convert
 *
 * Return: value of integer
*/
int _atoi(char *s)
{
	int i, j, n, m;

	i = n = 0;
	m = 1;
	while ((*(s + i) < '0' || *(s + i)
> '9') && (*(s + i) != '\0'))
	{
		if (*(s + i) == '-')
			m *= -1;
		i++;
	}
	j = i;
	while ((*(s + j) >= '0') && (*(s +
j) <= '9'))
	{
<<<<<<< HEAD
		n = n * 10 + m * (*(s + j) -  '0');
=======
		n = n * 10 + m * (*(s + j)
 - '0');
>>>>>>> de8f392dfb1a1dbea3733293903eef86d926ab05
		j++;
	}
	return (n);
}
