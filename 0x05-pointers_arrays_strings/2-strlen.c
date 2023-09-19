#include "main.h"

/**
 *_strlen - find the length of a string
 *@s: the string to be measured
 *
 *return: length of the string
 *
 */

int _strlen(char *s)
{
int len;
len = 0;
while (s[len] != '\0')
{
len++;
s++;
}
return (len);
}
