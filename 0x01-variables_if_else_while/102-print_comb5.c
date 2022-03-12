#include <stdio.h>

/**
 *main - print a num pair from 00-99 but no repeats 
 *Return: Always 0 (Success)
 */

int main(void)
{
	int t;
	int o;

	for (t = '0'; t <= '99'; t++) /*print first two digit combo*/
	{
		for (o = '0'; o <= '99'; o++)
		{
			if (t < o && t !=j)
			{
				putchar((t / 10) + '0');
				putchar((t % 10) + '0');
				putchar(' ');
				putchar((o / 10) + '0');
				putchar((0 % 10) + '0');
				if (t !=98 || o !=99)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
