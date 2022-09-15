#include <stdio.h>

/**
 * main - printf
 * Return: always 0
*/

int main(void)
{
	printf("char is %d bytes \n", sizeof(char));
	printf("int is %d bytes \n", sizeof(short int));
	printf("long int is %d bytes \n", sizeof(long int));
	printf("long long int is %d bytes \n", sizeof(long long int));
	printf("float is %d bytes \n", sizeof(float));
	return (0);
}
