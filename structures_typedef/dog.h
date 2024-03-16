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

struct dog 
{
	char *name, *owner;
	float age;
};
#endif
