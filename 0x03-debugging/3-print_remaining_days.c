#include "main.h"

/**
 * print_remaining_days - takes a date and prints how many days are
 * left in the year. taking leap year in account
 * @month: month in number format
 * @days: days of month
 * @year: year
 * Return: void
 */
void print_remaining_days(int month, int days, int year);
{
	if ((year % 100 == 0 && year % 400 == 0) || (year % 4 == 0))
	{
		if (month > 2 && days == 60)
		{
			day++;
		}
		printf("Days of the year: %d\n", day);
		printf("Remaining days: %d\n", 366 - days);
	}
	else
	{
		if (month == 2 && day == 60)
		{
			printf("Invalid Date: %02d/%02d/%04d\n", month, day - 30, year);
		}
		else
		{
			printf("Day ofthe year: %d\n", day);
			printf("Remaining days: %d\n", 365 - day);
		}
	}
}
