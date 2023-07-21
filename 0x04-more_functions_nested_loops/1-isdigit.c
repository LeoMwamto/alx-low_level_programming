#include "main.h"

/**
 * _isdigit - function checks for a digit
 * @c:The character to be checked
 * Return: : 1 for digit character 0 for otherwise
 */

int _isdigit(int c)

{
if (c >= 48 && c <= 57)
{
return (1);
}
return (0);
}
