#ifndef DOG_H
#define DOG_H

/**
 * struct dog - structure definition of a dog
 * @name: character string
 * @age: integer
 * @owner: character string
 */

struct dog
{
	char *name;
	char *owner;
	float age;
};

void init_dog(struct dog *d, char *name, float age, char *owner);

#endif