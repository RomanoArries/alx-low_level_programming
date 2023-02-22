#include "main.h"
/**
 * main - print _putchar
 * Return: means success
 */
int main(void)
{
	char hacker[] = "_putchar";

	int c;

	for (c = 0; c < 8; c++)
	{
		_putchar(hacker[c]);
	}
	_putchar('\n');
	return (0);
}
