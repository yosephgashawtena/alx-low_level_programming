#include<stdio.h>
/**
 *main - Entry point
 *Description: Prints the aplhabets in lowercase
 *Return: 0 if the program is successfull
 */
int main(void)
{
	int alpha;
	int x;

	for (alpha = '0' ; alpha < '9' ; alpha++)
	{
		for (x = alpha + 1 ; x <= '9' ; x++)
		{
			if (alpha != x)
			{
				putchar(alpha);
				putchar(x);
				if (!(alpha == '8' && x == '9'))
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}

	putchar('\n');
	return (0);
}
