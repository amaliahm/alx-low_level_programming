#include "main.h"
#include <stdio.h>

/**
 * isLower - to know if the char is lowercase or no
 *
 * @c: character input
 *
 * Return: 1 if true else 0
*/

int isLower(char c)
{
	return (c >= 97 && c <= 122);
}

/**
 * isDelimiter - to know if the char is delimiter
 *
 * @c: char input
 *
 * Return: 1 if true else 0
*/

int isDelimiter(char c)
{
	int i;
	char delimiter[] = " \t\n,;.!?\"(){}";

	for (i = 0; i < 12; i++)
		if (c == delimiter[i])
			return (1);
	return (0);
}

/**
 * cap_string - capitalize of char in string
 *
 * @str: string input
 *
 * Return: string with capitalize letters
*/

char *cap_string(char *str)
{
	char *ptr = str;
	int f = 1;

	while (*str)
	{
		if (isDelimiter(*str))
			f = 1;
		else if (isLower(*str) && f)
		{
			*str -= 32;
			f = 0;
		}
		else
			f = 0;
		str++;
	}
	return (ptr);
}
