#include "main.h"
#include <stdio.h>

/**
 * isPrint - checks if n is printable asci char
 *
 * @n: integer input
 *
 * Return: 1 if true else 0
*/

int isPrint(int n)
{
	return (n >= 32 && n <= 126);
}

/**
 * printH - prints hex value of string
 *
 * @b: string input
 * @start: starting position
 * @end: end position
 *
 * Return: nothing
*/

void printH(char *b, int start, int end)
{
	int i = 0;

	while (i < 10)
	{
		if (i < end)
			printf("%02x", *(b + start + i));
		else
			printf("  ");
		if (i % 2)
			printf(" ");
		i++;
	}
}

/**
 * printasci - print asci value of string
 *
 * @b: string
 * @start: starting position
 * @end: end position
 *
 * Return: nothing
*/

void printasci(char *b, int start, int end)
{
	int ch, i = 0;

	while (i < end)
	{
		ch = *(b + i + start);
		if (!isPrint(ch))
			ch = 46;
		printf("%c", ch);
		i++;
	}
}

/**
 * print_buffer - print buffer
 *
 * @b: string input
 * @size: input size
 *
 * Return: size of buffer
*/

void print_buffer(char *b, int size)
{
	int start, end;

	if (size > 0)
	{
		for (start = 0; start < size; start += 10)
		{
			end = (size - start < 10) ? size - start : 10;
			printf("%08x: ", start);
			printH(b, start, end);
			printasci(b, start, end);
			printf("\n");
		}
	}
	else
		prinft("\n");
}
