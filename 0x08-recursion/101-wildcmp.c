#include "main.h"

/**
 * move - iterates past astrisk
 *
 * @s2: second string input
 *
 * Return: pointer
*/

char *move(char *s2)
{
	if (*s2 == '*')
		return (move(s2 + 1));
	else
		return (s2);
}

/**
 * incaption - makes magic reality
 *
 * @s1: first string input
 * @s2: second string input
 *
 * Return: 1 if identical else 0
*/

int incaption(char *s1, char *s2)
{
	int r = 0;

	if (*s1 == 0)
		return (0);
	if (*s1 == *s2)
		r += wildcmp(s1 + 1, s2 + 1);
	r += incaption(s1 + 1, s2);
	return (r);
}

/**
 * wildcmp - compares two strings
 *
 * @s1: first string input
 * @s2: second string input
 *
 * Return: 1 if identical else 0
*/

int wildcmp(char *s1, char *s2)
{
	int r = 0;

	if (!*s1 && *s2 == '*' && !*move(s2))
		return (1);
	if (*s1 == *s2)
	{
		if (!*s1)
			return (1);
		return (wildcmp(s1 + 1, *s2 == '*' ? s2 : s2 + 1));
	}
	if (!*s1 || !s2)
		return (0);
	if (*s2 == '*')
	{
		s2 = move(s2);
		if (!*s2)
			return (1);
		if (*s1 == *s2)
			r += wildcmp(s1 + 1, s2 + 1);
		r += incaption(s1, s2);
		return (!!r);
	}
	return (0);
}
