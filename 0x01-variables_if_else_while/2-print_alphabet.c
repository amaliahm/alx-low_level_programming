#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: lowercase alphabet
 *
 * Return: 0 (Successà
 */
int main(void)
{
	char alphabet = 'a';

	while (alphabet <= 'z')
	{
		putchar(alphabet);
		alphabet++;
	}
	putchar("\n");
	return (0);
}
