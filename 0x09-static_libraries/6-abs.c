#include "main.h"

/**
 * _abs - function that computes the absolute value of an integer
 *
 * @n: takes n integre type input for function
 *
 * Description: get the absolute value of integre
 *
 * Return: Always 0 (Success)
*/

int _abs(int n)
{
	if (n < 0)
		n = (-1) * n;
	return (n);
}
