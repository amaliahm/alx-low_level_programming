#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: print all possible different combinations of two digits
 *
 * Return: 0 (Success)
 */
int main(void)
{
	int one = 0;
	int two;

	while (one <= 9)
	{
		two = 0;
		while (two <= 9)
		{
			if (one != two && one < two)
			{
				putchar(one + 48);
				putchar(two + 48);

				if (one + two != 17)
				{
					putchar(",");
					putchar(" ");
				}
			}
			two++;
		}
		one++;
	}
	putchar('\n');

	return (0);
}
