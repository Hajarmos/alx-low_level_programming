#ifndef _DOG_H_
#define _DOG_H_
/**
 * struct dog - dog information
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 * Description: defines dog
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif
