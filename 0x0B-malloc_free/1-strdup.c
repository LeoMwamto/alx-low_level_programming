#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - function returns a pointer to a new space memory
 * @str: char
 * Return: 0
 */
char *_strdup(char *str)
{
	char *wom;
	int i, a = 0;

	if (str == NULL)
		return (NULL);
	i = 0;
	while (str[i] != '\0')
		i++;
	wom = malloc(sizeof(char) * (i + 1));

	if (wom == NULL)
		return (NULL);

	for (a = 0; str[a]; a++)
		wom[a] = str[a];

	return (wom);
}
