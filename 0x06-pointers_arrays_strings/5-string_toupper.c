#include "main.h"

/**
 *string_toupper - change lowercase letters to uppercase i
 *n a string
 *@str: string that will be modified
 *
 *Description: change all lowercase letters to upppercase
 *in a string
 *
 * Retun: pointer to the modified string
 */

char *string_toupper(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	if (str[i] >= 'a' && str[i] <= 'z')
	{
		str[i] = str[i] - ('a' +  'A');
	}
	return (str);
}

