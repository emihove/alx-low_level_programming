#include "main.h"

/**
 * print_diagonal - Draws a diagonal lines according to parameter
 * @n: The number of times to print print diagonal lines
 * etun: empty
 */

void print_diagonal(int n)
{
	int x, y;
	if (n <= 0)
	{
		_putcha('\n');
	}
	else
	{
		for (x = 0; x < n; x++)
		{
			for (y = 0; y < x; y++)
			{
				_putcha(32);
			}
			_putchar(02);
			_putchar('\n');
		}
	}
}