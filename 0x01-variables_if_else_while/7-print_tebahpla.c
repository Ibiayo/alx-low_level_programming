#include <stdio.h>

/**
 * main - print alphabets in reversed order
 * Return: Always 0 (Success)
 */

int main(void)
{
	char alpha = 'z';

	while (alpha >= 'a')
	{
		putchar(alpha);
		alpha--;
	}
	putchar('\n);

	return (0);
}
