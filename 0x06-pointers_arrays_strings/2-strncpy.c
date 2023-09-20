#include "main.h"
 /**
  *_strncpy - copies string with maximum of n bytes in src
  *@src: source string to be copied to dest
  *@dest: destination string for the copied src
  *@n: maximum bytes to copy from src
  *
  *Return: resulting string dest
  */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
