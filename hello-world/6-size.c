#include <stdio.h>
/**
 * main - Entry point
 *
 * code to print the size of various types on the computer it is compiled and run on
 * Return: 0 after printing the function
 */
int main(void)
{
	char c;
	int i;
	long int li;
	long long int lil;
	float f;

	printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(c));
	printf("Size of an int: %lu byte(s)\n", (unsigned long)sizeof(i));
	printf("Size of a long int: %lu byte(s)\n", (unsigned long)sizeof(li));
	printf("Size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(lil));
	printf("Size of a float: %lu byte(s)\n", (unsigned long)sizeof(f));

return (0);
}
