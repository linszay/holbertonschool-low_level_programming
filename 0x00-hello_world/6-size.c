#include <stdio.h>

/**
 * main - printf
 * return: always 0
*/

int main(void)
{
	printf("char is %2d bytes \n", sizeof(char));
	printf("int is %2d bytes \n", sizeof(short int));
	printf("long int is %2d bytes \n", sizeof(long int));
	printf("long long int is %2d bytes \n", sizeof(long long int));
	printf("float is %2d bytes \n", sizeof(float));
	return (0);
}
