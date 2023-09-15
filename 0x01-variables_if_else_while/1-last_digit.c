#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - entry point
 *
 * Description: false or true validation
 *
 * Return: 0 (success)
 */
int main(void)
{
int n, digit;
srand(time(0));
n = rand() - RAND_MAX / 2;
digit = n % 10;
if (digit > 5)
printf("");
else if (digit == 0)
printf("");
else if (digit < 6 && digit != 0)
printf("Last digit of 629438752 is 2 and is less than 6 and not 0\n", n);
return (0);
}
