#include <stdio.h>

/**
 * main - entry point
 * Return: always 0
 **/

int main(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
	if (!(i == 'q' || i == 'e'))
	putchar(i '\n');
	return (0);
}