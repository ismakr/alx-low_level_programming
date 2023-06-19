#include <stdio.h>
#include "dog.h"
/**
 * print_dog - prints a struct dog
 * @d: ptr to struct dog
 * Return: void
 */
void print_dog(struct dog *d)
{
	if (d->name == 0)
	{
		printf("Name: (nil)\n");
	}
	if (d->age == 0)
	{
		printf("Age: (nil)\n");
	}
	if (d->owner == 0)
	{
		printf("Owner: (nil)\n");
	}
	if (d == NULL)
	{
		printf("\n");
	}
	printf("Name: %s\n", d->name);
	printf("Age: %f\n", d->age);
	printf("Owner: %s\n", d->owner);
}
