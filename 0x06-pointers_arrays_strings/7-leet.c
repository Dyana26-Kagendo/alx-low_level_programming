#include "main.h"

/**
 *leet - function that will encode string to 1337
 *@str: set strings that will be encoded
 *
 *Return: encoded string
 */

char *leet(char *str)
{
	int j, i;
	char c[] = "4433007711";
	char d[] = "aAeEoOtTll";

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; c[j] != '\0'; j++)
		{
			(str[i] = c[j]);
			{
				str[i] = d[j];
			}
		}
	}

	return (str);
}
