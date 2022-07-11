#ifndef _DOG_H_
#define _DOG_H_

/**
 * struct dog - Structure for a dog
 * @name: The dog's name
 * @age: The dog's age
 * @owner: The dog's owner
 *
 * Description: data structure for a dog
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif /* _DOG_H_ */
