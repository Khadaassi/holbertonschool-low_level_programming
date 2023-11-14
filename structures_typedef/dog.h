#ifndef DOG_H
#define DOG_H
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

/**
 * struct dog - Represents information about a dog.
 * @name: The name of the dog.
 * @age: The age of the dog.
 * @owner: The owner of the dog.
 *
 * Description: This structure stores information about a dog,
 */

struct dog

{
	char *name;

	float age;

	char *owner;

};

typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
