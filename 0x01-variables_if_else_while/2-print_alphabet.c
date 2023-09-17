#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: This program prints the alphabet in lowercase,
 * followed by a newline.
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
char letter = 'a';

while (letter <= 'z')
{
putchar(letter);
letter++;
}

putchar('\n');

return (0);
}

