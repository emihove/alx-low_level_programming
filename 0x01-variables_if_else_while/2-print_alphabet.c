#include <stdio.h>

/**
 * main - prints alpha in lowercase
 *
 * Return: Always 0
 */
int main(void)
{
	char lcase;

	for (lcase = 'a'; lcase <= 'z'; lcase++)
	{
		putchar(lcase);
	}
	putchar('\n');
	return (0);
}
