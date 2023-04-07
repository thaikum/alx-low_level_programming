#ifndef DOG
#define DOG
/**
 * struct dog - dogs attributes
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
 *
 * Description: dogs attribute
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *id);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif
