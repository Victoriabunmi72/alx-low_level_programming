#ifndef _MAIN_H_
#define _MAIN_H_

#include <stdio.h>
#include "dog.h"

int _putchar(char c);
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
