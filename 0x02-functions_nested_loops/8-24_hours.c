#include "main.h"

/**
 * jack_bauer - prints every minutes of the day
 *
 * Description: print every minute of day
 *
*/

int jack_bauer()
{
	int min, fr;

	for (hr = 0; hr <= 23; hr++)
	{
		for (min = 0; min <= 59; min++)
		{
			_putchar((hr / 10) + 48);
			_putchar((hr % 10) + 48);
			_putchar(':');
			_putchar((min / 10) + 48);
			_putchar((min % 10) + 48);
			_putchar('\n');
		}
	}
}
