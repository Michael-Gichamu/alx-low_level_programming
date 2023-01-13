#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - Concatenates two strings.
 * @s1: The string to be copied.
 * @s2: The string to be copied.
 * @n: size to be allocated.
 *
 * Return: A pointer to the concatenated string.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int s1len = 0, s2len = 0, len = 0, i = 0;
	char *str;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[s1len])
		++s1len;
	while (s2[s2len])
		++s2len;
	if (n >= s2len)
		len = s1len + s2len;
	else
		len = s1len + n;

	str = malloc((len + 1) * sizeof(char));

	if (str == NULL)
		return (NULL);
	s2len = 0;
	while (i < len)
	{
		if (i <= s1len)
			str[i] = s1[i];

		if (i >= s1len)
		{
			str[i] = s2[s2len];
			s2len++;
		}
		i++;
	}
	str[i] = '\0';
	return (str);
}


