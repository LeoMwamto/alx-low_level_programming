#include <stdlib.h>
#include <stdio.h>

/**
 * create_array - function creates an array of char, initializes specific char
 * @size: size
 * @c: char
 * Return: pointer to the array or null
 */

char *create_array(unsigned int size, char c)
{
	char *p;
	unsigned int i;

	if (size == 0)
		return (NULL);
	p = malloc(sizeof(char) * size);
	if (p == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		p[i] = c;
	return (p);
}
