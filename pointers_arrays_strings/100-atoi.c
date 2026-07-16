#include "main.h"
#include <stdio.h>

/**
 * _atoi - converts a string to an integer
 * @s: copies the string to an integer
 *
 * Return: 0
 */
int _atoi(char *s)
{
	unsigned int i;
	int sign;
	int num;

	i = 0;
	sign = 1;
	num = 0;
	while (s[i] != 0)
	{
		if (s[i] == '-')
			sign = (sign * -1);
		if (s[i] >= '0' && s[i] <= '9')
			num = num * 10 + (s[i] - '0');
		++i;
	}
	return (num * sign);
}
