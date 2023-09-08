#include <stdio.h>

/**
 * main - this is the main function
 *
 * Return: 0 on success
 */

int main(void)
{
	printf("size of a char: %lu byte(s)", sizeof(char));
	printf("size of a int: %lu byte(s)", sizeof(int));
	printf("size of a long int: %lu byte(s)", sizeof(long int));
	return (0);
}
