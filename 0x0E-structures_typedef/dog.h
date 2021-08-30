#ifndef DOGBERTON
#define DOGBERTON
#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>

/**
 * struct dog - structured dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 * Description: data of the dog
 */

typedef struct dog
{
char *name;
float age;
char *owner;
} dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
int main(void);

#endif
