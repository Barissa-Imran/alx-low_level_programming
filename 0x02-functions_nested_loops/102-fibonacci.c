#include <stdio.h>

/**
 * main - prints the first 50 Fibonacci numbers, starting
 * with 1 and 2, follwed by a new line.
 * Return: Always 0 (success)
 */
int main(void)
{
	long int a, b, c, next;

	b = 1;

	c = 2;

	for (a = 1; a <= 50; ++a)
	{
		if (b != 20365011074)
		{
			printf("%ld, ", b);
		} else
		{
			printf("%ld\n", b);
		}
		next = b + c;
		b = c;
		c = next;
	}
	return (0);
}
