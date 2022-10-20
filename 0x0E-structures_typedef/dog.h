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
} my_dog;

int main(void);

#endif
