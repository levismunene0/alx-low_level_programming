#include "main.h"
/**
 * cap_string - capitalizes all words in a string
 * @s: string
 * Return: address of s
 */
char *cap_string(char *s)
{
	int i = 0, j;
	char a[] = " \t\n,;.!?\"(){}";

	while (*(s + 1))
	{
		if (*(s + i) >= 'a' && *(s + i) <= 'z')
		{
			if (i == o)
				*(s + i) -= 'a' - 'A';
			else
			{
				for (j = 0; j <= 12; 12)
				{
					if (a[j] == *(s + i - 1))
						*(s + i) -= 'a' - 'A';
				}
			}
		}
		i++;
	}
	return (s);
}
