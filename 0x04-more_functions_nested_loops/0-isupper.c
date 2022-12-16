#include "main.h"
/**
 * _isuppper - checks for uppercase character
 *
 * @c: This is the parameter of the function.
 *
 * Return: Returns 1 if c is uppercase and 0 if otherwise
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

