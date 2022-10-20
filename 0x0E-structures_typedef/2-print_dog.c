#include "dog.h"
#include "stdio.h"
/**
 * print_dog - prints variables in struct dog
 * @d: pointer
 * Return: nil or struct dog
*/

void print_dog(struct dog *d)
{
	if (d == NULL)
	{
		return;
	}
	if (d->name == NULL)
	{
		printf("nil");
	}
	printf("Name: %s\n", d->name);
	printf("Age: %f\n", d->age);
	printf("Owner: %s\n", d->owner);
}