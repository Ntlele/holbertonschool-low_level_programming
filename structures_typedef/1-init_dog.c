#include <stdio.h>
#include "dog.h"
/**
 * init_dog - initializes a structure called dog
 * @d: pointer to the structure
 * @name: stores array as name of dog
 * @age: stores float numeral as age  of dog
 * @owner: stores array of the name of dog owner
 * return: void
 *
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;

	d->name = name;
	d->age = age;
	d->owner = owner;
}


