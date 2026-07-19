#include "main.h"

/**
 * cap_string - capitalizes all words of a string
 * @str: the string to capitalize
 *
 * Return: a pointer to the resulting string
 */
char *cap_string(char *str)
{
	int i;
	int j;
	int is_sep;
	char separators[] = " \t\n,;.!?\"(){}";

	i = 0;
	while (str[i] != '\0')
	{
		is_sep = 0;
		if (i == 0)
		{
			is_sep = 1;
		}
		else
		{
			j = 0;
			while (separators[j] != '\0')
			{
				if (str[i - 1] == separators[j])
				{
					is_sep = 1;
				}
				j++;
			}
		}

		if (is_sep && str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = str[i] - ('a' - 'A');
		}

		i++;
	}

	return (str);
}
