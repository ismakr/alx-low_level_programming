#ifndef dog_h
#define dog_h
/**
 * struct dog - desc
 * @name: ptr to a str -dog name
 * @age: float nbr dog -age
 * @owner: ptr to a str -owner name
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif
