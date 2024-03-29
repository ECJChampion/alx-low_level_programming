#ifndef DOG_H
#define DOG_H
/**
 * struct dog -a function that defines a new type of struct
 * @name: 1st member
 * @age: 2nd member
 * @owner: 3rd member
 *
 * Description: The `struct dog` is a C structure that represents a dog
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

typedef struct dog dog_t;

dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
