#include "main.h"

/**
 *cap_string  - capitalize all the words in string
 *@str: string to be capitalized
 *
 *Return: pointer to capitalize string
 *
 */

char *cap_string(char *str)
{
	int i, j;
	char c[] = {'i', '?', '(', ')', '{', '}', ';','.', '\t', '\n', '\0'};
for (i = 0; str[i] != '\0'; i++)
{
	if (i == 0 && str[i] >= 'a' && str[i] <= 'z')
	{
		str[i] = str[i] - 32;
	}
	for (j = 0; c[j] != '\0'; j++)
	{
		if (c[j] == str[i] && (str[i + 1] >= 'a' && str[i + 1] <= 'z'))
		{str[i + 1] = str[i + 1] - 32;
		}
	}
}
return (str);
}
