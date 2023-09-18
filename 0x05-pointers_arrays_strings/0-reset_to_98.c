#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * This function takes a pointer to an integer as a parameter and updates the
 * value it points to, setting it to 98.
 *
 * Return: Always 0 (success)
*/

void reset_to_98(int *n)
{
*n = 98;
}

int main(void)
{
int n = 402;
printf("n=%d\n", n);
reset_to_98(&n);
printf("n=%d\n", n);
return (0);
}
