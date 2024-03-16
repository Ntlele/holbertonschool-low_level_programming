#ifndef DOG_H
#define DOG_H

/**
 * struct dog - collects personal information
 * @name: stores string of charactors as name of dog
 * @age: stores a float numeral as age of dog
 * @owner: array of charactors as name of owner
 *
 * Description: this structure stores the details of a dog
 */

typedef struct dog
{
	char *name, *owner;
	float age;
} dog_t;

/**
 * init_dog - initializes a structure called dog
 * @d: pointer to the structure
 * @name: stores array as name of dog
 * @age: stores float numeral as age  of dog
 * @owner: stores array of the name of dog owner
 * return: void
 *
 */
void init_dog(struct dog *d, char *name, float age, char *owner);

/**
 * print_dog - prints a structure called dog
 * @d: pointer to the structure
 * return: void
 *
 */

void print_dog(struct dog *d);

#endif
