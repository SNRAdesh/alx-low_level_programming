#include <stdlib.h>
#include "dog.h"
/**
 * new_dog - creating a new dog.
 * @name: name of the dog.
 * @age: age of the dog.
 * @owner: owner of the dog.
 * Return: struct dog.
 * if fails, returns NULL.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *p_dog;
	int j, lname, lowner;

	p_dog = malloc(sizeof(*p_dog));
	if (p_dog == NULL || !(name) || !(owner))
	{
		free(p_dog);
		return (NULL);
	}

	for (lname = 0; name[lname]; lname++)
		;

	for (lowner = 0; owner[lowner]; lowner++)
		;

	p_dog->name = malloc(lname + 1);
	p_dog->owner = malloc(lowner + 1);

	if (!(p_dog->name) || !(p_dog->owner))
	{
		free(p_dog->owner);
		free(p_dog->name);
		free(p_dog);
		return (NULL);
	}

	for (j = 0; j < lname; j++)
		p_dog->name[j] = name[j];
	p_dog->name[j] = '\0';

	p_dog->age = age;

	for (j = 0; j < lowner; j++)
		p_dog->owner[j] = owner[j];
	p_dog->owner[j] = '\0';

	return (p_dog);
}
