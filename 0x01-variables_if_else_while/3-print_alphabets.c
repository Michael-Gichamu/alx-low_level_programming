#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */
int main(void)
{
char Char;

for (Char = 'a' ; Char <= 'z' ; Char++)
{
putchar(Char);
}
for (Char = 'A' ; Char <= 'Z' ; Char++)
{
putchar(Char);
}
putchar('\n');
return (0);
}
