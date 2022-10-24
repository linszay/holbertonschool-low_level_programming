#ifndef dog_h
#define dog_h

/**
 * struct dog - contains dog related data
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
*/

typedef struct dog
{
	/* data */
	char *name;
	float age;
	char *owner;
} dog_t;

int main(void);
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
