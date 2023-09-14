#include "main.h"
#include <stdio.h>

/**
 * main - check the code.
 *
 * Return: Always 0.
 */
int main(void)
{
    char c;

I^I c = 'A';
I^I printf("%c: %d\n", c, _isupper(c));
I^I c = 'a';
I^I printf("%c: %d\n", c, _isupper(c));
I^I return (0);
}
