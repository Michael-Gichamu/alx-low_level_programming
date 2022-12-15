#include "main.h"

/**
 * _abs - Computes a number to its absolute value
 *
 * @num:  This is a parameter to the _abs function
 *
 * Return: 0
 */

int _abs(int num)
{
	if (num > 0 || num == 0)
	{
		return (num);
	}
	else
		return (num * -1);
}
