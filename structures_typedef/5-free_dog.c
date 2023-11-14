#include "dog.h"
/**
 * free_dog - Frees memory for a dog structure
 * @d: Pointer to the dog structure
 */
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
