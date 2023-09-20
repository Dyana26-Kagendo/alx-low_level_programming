#include "main.h"

/**
 *_strcmp - compare two strings
 *@s1: first string to be compared
 *@s2: second string to be compared
 *
 *Return:
 * -negative value when s1 is less than s2
 * -positive value when s1 is greater than s2
 * -0 if the strings are equal
 */

int _strcmp(char *s1, char *s2)
{
	while ((*s1 != '\0' && *s1 == *s2) && s1 >= s2)
	{
	s1++;
	s2++;
	}
	return (*s1 - *s2);
}
