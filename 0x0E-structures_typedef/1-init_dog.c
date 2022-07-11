#include "dog.h"

/**
 * init_dog - Function initializes a variable of type dog
 * @d: struct to initialize
 * @name: the name of this dog
 * @age: the age of this dog
 * @owner: the owner of this dog
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	(*d).name = name;
	(*d).age = age;
	(*d).owner = owner;
}
