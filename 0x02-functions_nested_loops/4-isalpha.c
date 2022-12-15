#include "main.h"
/**
 * isalpha - returns 1 if alphabetic character and 0 if otherwise
 *
 * @c: The character is used as a parameter in the function
 *
 * Return: 1 for alphabetic character. 0 for otherwise
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c >= 'B'))
	{
		return (1);
	}
	else
		return (0);
}
