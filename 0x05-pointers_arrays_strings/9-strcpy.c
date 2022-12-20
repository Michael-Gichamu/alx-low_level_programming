#include "main.h"

/**
  * _strcpy - Copys a string
  * @dest: parmeter for destination value
  * @src: parameter for source value
  *
  * Return: pointer to dest
  */
char *_strcpy(char *dest, char *src)
{
	int ch;

	for (ch = 0; src[ch] != '\0'; ch++)
	{
		dest[ch] = src[ch];
	}

	dest[ch++] = '\0';

	return (dest);
}
