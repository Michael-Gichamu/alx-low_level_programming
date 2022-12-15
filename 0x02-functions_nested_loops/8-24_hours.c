#include "main.h"
/**
 * jack_bauer  - displays every minute of the day
 *
 * Return: Always 0
 */
void jack_bauer(void)
{
	int hour = 0;
	int minute = 0;
	int hour_rem;
	int minute_rem;

	while (hour <= 23)
	{
	while (minute <= 59)
	{
	minute_rem = minute % 10;
	hour_rem = hour % 10;
	_putchar(hour / 10 + '0');
	_putchar(hour_rem + '0');
	_putchar(':');
	_putchar(minute / 10 + '0');
	_putchar(minute_rem + '0');
	minute++;
	_putchar('\n');
	}
	hour++;
	minute = 0;
	}
}

