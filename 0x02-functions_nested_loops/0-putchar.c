<<<<<<< HEAD
#include "main.h"

/**
 * main - Entry point
 *
 * Description: prints _putchar using putchar prototype
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char str[] = "_putchar";
	int ch;

	for (ch = 0; ch < 8 ; ch++)
		_putchar(str[ch]);
	_putchar('\n');

	return (0);
}
=======
#include "main.h"

/**
 * main - Entry point
 *
 * Description: prints _putchar using putchar prototype
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
  char str[] = "_putchar";
  int ch;

  for (ch = 0; ch < 8 ; ch++)
    _putchar(str[ch]);
  _putchar('\n');

  return (0);
}
>>>>>>> 31d07d443b961c437f947dc5d979a51faf6813fa
