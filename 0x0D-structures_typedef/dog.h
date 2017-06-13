#ifndef DOG_H
#define DOG_H
/**
 * struct dog - structure of dog
 * @name: char string for name of dog
 * @age: float string for age of dog
 * @owner: char string for owner of dog
 *
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} my_dog;
void init_dog(struct dog *d, char *name, float age, char *owner);



#endif
