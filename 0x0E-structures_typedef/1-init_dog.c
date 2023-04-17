#include "dog.h"
/**
 * init_dog -  initialize a variable of type dog
 *
 * @d: struct dog
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 *
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	struct dog *doggy;

	doggy = d;
	doggy->name = name;
	doggy->age = age;
	doggy->owner = owner;

}
