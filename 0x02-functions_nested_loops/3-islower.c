#include "holberton"

/**
 * _islower - a function that checks for lower case characters
 * @c: sinle letter input
 * Return: 1 if int c is lowercase, 0 if otherwise
 */
int _islower(int c)
{
	if (c >= 'a' && c<= 'z')
		return (1);
	else
		return (0);
}
