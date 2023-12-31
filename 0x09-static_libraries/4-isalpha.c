#include "main.h"

/**
 * _isalpha - checks if character is letter both lowercase or uppercase
 *
 * @c: number type integer input for function
 *
 * Description: checks if character is lowercase or uppercase letters
 *
 * Return: 1 is c if true else 0
*/

int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	if (c >= 65 && c <= 90)
		return (1);
	return (0);
}
