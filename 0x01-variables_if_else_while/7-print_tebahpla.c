#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char i;

	putchar ("Capital (upper) case characters:\n");

	for (i = 'A'; i <= 'Z'; i++)

		putchar ("%c", i);

	printf("\n\nLower case characters:\n");

	for (i = 'a'; i <= 'z'; i++)

		putchar("%c", i);

	return (0);
}
