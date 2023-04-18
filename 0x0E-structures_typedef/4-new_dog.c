#include "dog.h"
#include <stdlib.h>

/**
 * set_cpy - copies string
 * @des: pointer to new string
 * @origin: pointer to string to copy
 * Return: void
 */
void set_cpy(char *des, char *origin)
{
	unsigned int i, len = 0;

	while (origin[len])
		len++;
	for (i = 0; i <= len; i++)
		des[i] = origin[i];
}

/**
 * new_dog - creates a new dog
 * @name: new dog name
 * @age: new dog age
 * @owner: new dog owner
 * Return: pointer to new dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	unsigned int i = 0, j = 0;
	dog_t *new_dog;

	while (name[i])
		i++;
	while (owner[j])
		j++;
	new_dog = malloc(sizeof(dog_t));
	if (!new_dog)
		return (NULL);
	new_dog->name = malloc(sizeof(char) * (i + 1));
	if (new_dog->name)
	{
		new_dog->owner = malloc(sizeof(char) * (j + 1));
		if (new_dog->owner)
		{
			set_cpy(new_dog->name, name);
			new_dog->age = age;
			set_cpy(new_dog->owner, owner);
			return (new_dog);
		}
		else
		{
			free(new_dog->name);
			free(new_dog);
		}
	}
	else
		free(new_dog);
	return (NULL);
}
