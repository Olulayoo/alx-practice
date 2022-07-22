#include <stdio.h>
/**
 * main - entry point
 *
 * prints the size of various types on the computer it is complied and run on
 * Return: 0 after success
 */
int main(void)
{
	char d;
	int f;
	long int y;
	long long int ly;
	float p;

	printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(d));
	printf("Size of an int: %lu byte(s)\n", (unsigned long)sizeof(f));
	printf("Size of a long int: %lu byte(s)\n", (unsigned long)sizeof(y));
	printf("Size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(ly));
	printf("Size of a float: %lu byte(s)\n", (unsigned long)sizeof(p));

	return (0);
}
