#include <stdio.h>
/**
 * main - print out sizes of data in C
 * code by bwave ict
 * Return: 0
 */
int main(void)
{
	printf("size of a char: %zu byte(s)\n", sizeof(char));

	printf("size of an int: %zu bytes(s)\n", sizeof(int));
	printf("size of a long int:%zu byte(s)\n", sizeof(long int));
	printf("size of a long long int: %zu byte(s)\n", sizeof(long long int));
	printf("size of a float %zu byte(s)\n", sizeof(float));
	return (0);
}

