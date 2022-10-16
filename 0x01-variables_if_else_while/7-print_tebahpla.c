#include <stdio.h>

/**
 * main - prints the lowercase alphabet in reverse,
 * followed by a newline, using putchar
 * Return: Always 0 (success)
 */
int main(void)
{
	char ch;

	for (ch = 'z'; ch >= 'a'; ch--)
	{
		putchar(ch);
	}
	putchar('n');
	return (0);
}
