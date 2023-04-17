#ifndef DOG_H
#define DOG_H

/**
 * struct dog - dog h
 * @name: first n
 * @age: years
 * @owner: sameone
 */
struct dog
{
	char name;
	float age;
	char owner;
}
/**
 * dog - typedef of struct dog
 */

typedef struct dog dog;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);


#endif
