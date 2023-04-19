#ifndef dog_h
#define dog_h
/**
 * struct dog - struct tsk
 * @name: First member
 * @age: Second member
 * @owner: Third member
 *
 * Description: Longer description
 */
typedef struct dog
{
char *name;
float age;
char *owner;
} dog;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
typedef struct dog
{
char *name;
float age;
char *owner;
} dog_t;
#endif
