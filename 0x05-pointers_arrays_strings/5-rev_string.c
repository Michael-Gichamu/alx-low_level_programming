#include "main.h"

/**
  * rev_string - Reverses a string
  * @s: Parameter of the string to be modified
  *
  * Return: void
  */
void rev_string(char *s)
{
	int ch, rev;
	char character;

	for (ch = '\0'; s[ch] != 0; ch++)
	{
	}
	rev = 0;
	for (ch = ch - 1; rev < ch; rev++)
	{
		character = s[ch];
		s[ch] = s[rev];
		s[rev] = character;
		ch--;
	}
}
