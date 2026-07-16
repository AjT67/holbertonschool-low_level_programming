#include "main.h"
#include <stdio.h>

/**
 * _atoi - converts a string to an integer
 * @s: pointer to the string to convert
 *
 * Return: num
 */
int _atoi(char *s)
{
	unsigned int i;
	int sign;
	int num;
	int started;

	i = 0;
	sign = 1;
	num = 0;
	started = 0;
	while (s[i] != 0)
	{
		if (s[i] == '-')
			sign = (sign * -1);
		if (s[i] >= '0' && s[i] <= '9')
		{
			started = 1;
			num = num * 10 - (s[i] - '0');
		}
		if (started == 1 && (s[i] < '0' || s[i] > '9'))
			break;
		++i;
	}
	return (-num);
}
