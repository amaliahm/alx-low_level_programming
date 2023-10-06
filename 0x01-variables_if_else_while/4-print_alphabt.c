#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: lowercase alphabet except q and e
 *
 * Return: 0 (Success)
 */
int main(void)
{
	char alphabet = 'a';

	while (alphabet <= 'z')
	{
		if (alphabet == 'q' || alphabet == 'e')
			alphabet++;
		putchar(alphabet);
		alphabet++;
	}
	putchar('\n');

	return (0);
}
