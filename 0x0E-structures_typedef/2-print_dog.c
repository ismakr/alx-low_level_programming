#include <stdio.h>
#include "dog.h"
/**
 * print_dog - prints a struct dog
 * @d: pointer
 * Return: void
 */
void print_dog(struct dog *d)
{
	if (d == 0)
	{
		printf("(nil)");
	}
	printf("Name: %s\n", d->name);
	printf("Age: %f\n", d->age);
	printf("Owner: %s\n", d->owner);
}
