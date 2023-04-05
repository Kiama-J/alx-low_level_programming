#ifndef _DOG_H_
#define _DOG_H_

/**
 * dog_t - .
 */

typedef struct dog dog_t;

/**
 * struct dog - .
 * @name: .
 * @age: .
 * @owner: .
 * Description: .
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
