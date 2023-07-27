#include <stdio.h>

/**
 * *main - main function
 * *Return: always 0
 **/

int main(void)
{
	int i;
	int j;
	int k;
	int l;

	for (i = 0 ; i < 10 ; i++)
	{
		for (j = 1 ; j < 10 ; j++)
		{
			{
				for (k = 2 ; k < 10 ; k++)
				{
					for (l = 3 ; l < 10; l++)
					{
						if (i != j && k != l)
						{
							putchar(i + '0');
							putchar(j + '0');
							putchar(' ');
							putchar(k + '0');
							putchar(j + '0');
							putchar(',');
							putchar(' ');
						}
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
