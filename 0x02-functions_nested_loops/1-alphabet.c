#include "holberton.h"

/**
 * print_alphabet - a function that prints the alphabet, in lower case
 *
 * Return: Always 0 (succes)
 */
void print_alphabet:(void)
{
	int n;

	for (n = 'a'; n <= 'z'; n++)
	{
		_putchar(n);
	}
	_putchar('\n');
}
