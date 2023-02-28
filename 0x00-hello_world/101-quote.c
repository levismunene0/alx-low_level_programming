#include <unistd.h>
/**
 * main - prints out the last part of the quote in the standard error
 * Return: always 1
 */
int main(void)
{
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 58);
	return (1);
}
