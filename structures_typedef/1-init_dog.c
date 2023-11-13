#include "dog.h"
/**
* init_dog - Initializes a struct dog
* @d: Pointer to the struct dog
* @name: Name of the dog
* @age: Age of the dog
* @owner: Owner of the dog
* Description: This function initializes a struct dog with the provided values
*/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	int i;
	int name_length = 0;
	int owner_length = 0;

	if (d == NULL || name == NULL || owner == NULL)
		return;

	while (name[name_length] != '\0')
		name_length++;

	d->name = (char *)malloc((name_length + 1) * sizeof(char));

	if (d->name == NULL)
		{
			return;
		}
	for (i = 0; i <= name_length; i++)
			d->name[i] = name[i];

	while (owner[owner_length] != '\0')
			owner_length++;

	d->owner = (char *)malloc((owner_length + 1) * sizeof(char));

	if (d->owner == NULL)
	{
		free(d->name);
		return;
	}

	for (i = 0; i <= owner_length; i++)
		d->owner[i] = owner[i];

	d->age = age;
}
