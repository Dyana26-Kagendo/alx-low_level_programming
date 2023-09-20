#include "main.h"

/**
 *_strncat - concanate two strings
 *@src: source string to be appended to dest
 *@dest: destination where src will be appended
 *@n: maximum number of bytes from src to be appended
 *
 *Return: resulting string dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int len1 = 0, len2 = 0, i = 0;

	while (dest[len1] != '\0')
	{
		len1++;
	}
	while (src[len2] != '\0')
	{
		len2++;
	}
	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[len1 + i] = src[i];
	}
	return (dest);
}
