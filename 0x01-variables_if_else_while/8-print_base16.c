#include <stdio.h>

/**
 *main - print base 16 lowercase
 *Return: Always 0 (Success)
 */

int main(void)
{
	int n = '0';
	int a_to_f ='a';

	while (a_to_f <= 'f')
	{
		putchar(a_to_f);
		a_to_f++;
	}

	putchar('\n');

	return (0);
}
