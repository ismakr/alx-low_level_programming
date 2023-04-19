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
	printf("%s", d->name);
	printf("%f", d->age);
	printf("%s", d->owner);
}
