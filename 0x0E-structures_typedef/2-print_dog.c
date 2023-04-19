#include <stdio.h>
#include "dog.h"
/**
 * print_dog - prints a struct dog
 * @d: pointer
 * Return: void
 */
void print_dog(struct dog *d)
{
	if (d->name == 0 || d->age == 0 || d->owner == 0)
	{
		printf("(nil)");
	}
	if (d == 0)
	{
		return;
	}
	printf("Name: %s\n", d->name);
	printf("Age: %f\n", d->age);
	printf("Owner: %s\n", d->owner);
}
