#include<stdio.h>
/**
 *main - Entry point
 *Description: Prints the aplhabets in lowercase
 *Return: 0 if the program is successfull
 */
int main(void)
{
	int alpha;

	for (alpha = 0 ; alpha <= 15 ; alpha++)
	{
		printf("%x", alpha);
	}
	putchar('\n');
	return (0);
}
