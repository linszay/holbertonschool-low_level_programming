#include <stdio.h>

/**
 * main - printf
 * Return: always 0
*/

int main(void)
{
	printf("Size of a char is %d bytes \n", sizeof(char));
	printf("Size of an int is %hd bytes \n", sizeof(short int));
	printf("Size of a long int is %d bytes \n", sizeof(long int));
	printf("Size of a long long int is %d bytes \n", sizeof(long long int));
	printf("Size of a float is %d bytes \n", sizeof(float));
	return (0);
}
