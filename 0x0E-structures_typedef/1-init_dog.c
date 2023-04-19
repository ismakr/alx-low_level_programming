#include "dog.h"
/**
 * init_dog -  initialize a variable of type struct dog
 * @d: pointer
 * @name: pointer to str
 * @age: float
 * @owner: pointer to str
 * Return: void
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == 0)
	{
		return;
	}
	d->name = name;
	d->age = age;
	d->owner = owner;
}
