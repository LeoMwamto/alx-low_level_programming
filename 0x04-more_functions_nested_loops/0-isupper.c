#include "main.h"

/**
 * _isupper - checks lowercase character
 * @c:The character to be checked
 * Return: 0 for lowercase && 1 for uppercase
 **/

int _isupper(int c)

{
if (c >= 65 && c <= 90)
{
return (1);
}
return (0);
}
