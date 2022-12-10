#include <stdio.h>

/**
 * main - Entry
 *
 * Display numbers between 00 to 99.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int a, b, c, d, e, f;

a = b = c = d = 48;
while (d < 58)
{
	c = 48;
	while (c < 58)
	{
		b = 48;
		while (b < 58)
		{
			a = 48;
			while (a < 58)
			{
				e = (d * 10) + c;
				f = (b * 10) + a;
				if (e < f)
				{
					putchar(d);
					putchar(c);
					putchar(b);
					putchar(a);
					if (d == 57 &&  c == 56 && b == 57 && a == 57)
						break;
					putchar(',');
					putchar(' ');
				}
				a++;
			}
			b++;
		}
		c++;
	}
	d++;
}
putchar('\n');
return (0);
}
