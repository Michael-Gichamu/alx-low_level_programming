#include "main.h"

/**
 * leet - encodes a string to 1337.
 * @str: The string to be encoded.
 *
 * Return: A pointer to the encoded string.
 */
char *leet(char *str)
{
	int count = 0, i;
	int lowercase[] = {97, 101, 111, 116, 108};
	int uppercase[] = {65, 69, 79, 84, 76};
	int numbers[] = {52, 51, 48, 55, 49};

	while (*(str + count) != '\0')
	{
		for (i = 0; i < 5; i++)
		{
			if (*(str + count) == lowercase[i] || *(str + count) == uppercase[i])
			{
				*(str + count) = numbers[i];
				break;
			}
		}
		count++;
	}

	return (str);
}

