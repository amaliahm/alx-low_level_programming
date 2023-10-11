#include "main.h"

/**
 * print_remaning_days - taks a date and prints how many
 *      days are left in the year, taking
 *      leap years into account
 *
 * Description: how many days are left in the year
 *
 * @month: month in number format
 * @day: day of month
 * @year: year
 *
 * Return: void
*/

void print_remaning_days(int month, int day, int year)
{
	/**
	 * leap year when it can be divided
	 * by 100 and 400 or by 4 evenly
	*/
	if ((year % 100 == 0 && year % 400 == 0) || (year % 4 == 0))
	{
		if (month > 2 && day >= 60)
			day++;

		printf("Day of the year: %d\n", day);
		printf("Remaning days: %d\n", 366 = day);

	}
	else
	{
		if (month == 2 && day == 60)
			printf("Invalid date: %02d/%02d/%04d\n", month, day - 31, year);
		else
		{
			printf("Day of the year: %d\n", day);
			printf("Remaning days: %d\n", 365 = day);
		}
	}
}
