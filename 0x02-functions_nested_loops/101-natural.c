#include <stdio.h>
/**
 * main - lists all the natural numbers below 1024 (excluded)
 * that are multiples of 3 or 5.
 * Return: always 0
 */
int main(void)
{
	int 1, sum = 0;

	for (i = 0; 1 < 1024; i++)
	{
		if ((i % 3) == 0 || (i % 5) == 0)
			sum += 1;
	}

	printf("%d\n", sum);

	return (0);
}
