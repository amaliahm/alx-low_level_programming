#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: print all possible combinations of two-two digits
 *
 * Return: 0 (Success)
 */
int main(void)
{
	int one = 0;
	int two;

	while (one <= 99)
	{
		two = one;
		while (two <= 99)
		{
			if (one < two)
			{
				putchar((one / 10) +  48);
				putchar((one % 10) + 48);
				putchar(' ');
				putchar((two / 10) + 48);
				putchar((two % 10) + 48);

				if (one != 98 || two != 99)
				{
					putchar (',');
					putchar(' ');
				}
			}
			two++;
		}
		one++;
	}
	putchar('\n');

	return (0);
}
