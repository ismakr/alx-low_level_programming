#include "dog.h"
/**
 * init_dog -  initialize a variable of type struct dog.
 * @d: ptr to struct dog
 * @name: struct var
 * @age: struct var
 * @owner: struct var
 * Return: void
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
