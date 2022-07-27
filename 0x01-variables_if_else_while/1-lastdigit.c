#include <stdlib.h>
#include <time.h>
/**
 * main - Determine if variable is greater than,less than or equal to
 * Return: 0 after success
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if ((n % 10) > 5)
	{
		printf("Last digit of %d is %i and is greater than 5\n", n);
	}
	if ((n % 10) < 6 && (n % 10) != 0)
	{
		printf("Last digit of %d is %i and is less than 6 and not 0\n", n);
	}
	if ((n % 10) == 0)
	{
		printf("Last digit of %d is %i and is 0\n", n);
	}
	return (0);
}
