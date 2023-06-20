#include "dog.h"
#include <stdlib.h>
/**
 * _strlen - ret the length of str
 * @s: Description of parameter x
(* a blank line
 * Description: Longer description of the function)?
(* section header: Section description)*
 * Return: int i
 */
int _strlen(char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}
/**
 * new_dog - creates a new dog.
 * @name: ptr to str name of dog
 * @age: float nbr age of dog
 * @owner: ptr to str name of the owner
 * Return: adress of ptr to the new struct dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *newdog;
	char *namecopy;
	char *ownercopy;
	int i, j;

	newdog = malloc(sizeof(dog_t));
	if (newdog == NULL)
	{
		free(newdog);
		return (NULL);
	}
	namecopy = malloc((sizeof(char) * _strlen(name)) + 1);
	if (namecopy == NULL)
		free(namecopy);
	ownercopy = malloc((sizeof(char) * _strlen(owner)) + 1);
	if (ownercopy == NULL)
		free(ownercopy);
	i = 0;
	j = 0;
	while (*(name + i) != '\0')
	{
		*(namecopy + j) = *(name + i);
		i++;
		j++;
	}
	*(namecopy + j) = '\0';
	i = 0;
	j = 0;
	while (*(owner + i) != '\0')
	{
		*(ownercopy + j) = *(owner + i);
		i++;
		j++;
	}
	*(ownercopy + j) = '\0';
	newdog->name = namecopy;
	newdog->age  = age;
	newdog->owner = ownercopy;
	return (newdog);
}
