#include <stdio.h>

/**
 * main - prints the alphabet in lowercase,
 * followed by a newline
 * Return: Always 0 (success)
 */
int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
