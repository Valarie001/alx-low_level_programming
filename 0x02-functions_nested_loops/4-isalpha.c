#include "holberton.h"
/**
 * _isalpha - a function that checks alphabetic character
 * @c: sinle letter input
 * Return: 1 if c is a letter (lower or uppercase), 0 otherwise
 */
int _isalpha(int c)
{
	if (((c >= 'a') && (c <= 'z')) ||(c >= 'A) && (c <= 'z')))
		return (1);
	else
		return (0);
}

