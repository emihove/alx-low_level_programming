<<<<<<< HEAD
#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
=======
#include <stdio.h>
>>>>>>> 73a22127474bdc54d1030e9bffeb59c387322fed
/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */
int main(void)
{
<<<<<<< HEAD
	int n, m;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	m = n % 10;
	if(m > 5)
		printf("Last digit of %d is %d and is greater than 5\n", n, m);
	if(m ==0)
		printf("Last digit of %d is %d and is zero\n", n, m);
	if (m < 6 && m != 0)
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, m);
	return (0);
}

=======
	char c;

	c = 'a';
	while
		(c <= 'z') {
			putchar(c);
			c++; 
		}
	putchar('\n');
	return (0);
} 
>>>>>>> 73a22127474bdc54d1030e9bffeb59c387322fed
