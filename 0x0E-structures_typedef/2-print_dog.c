#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_dog - Prints all the traits of  dog
  * @d: A dog struct
  *
  * Return: Nothing
  */
void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		if (d->name != NULL)
			printf("Name: %s\n", d->name);
		else
			printf("Name: (nil)");
		if (d->age > 0)
			printf("Age: %f\n", d->age);
		else
			printf("Age: (nil)");
		if (d->owner != NULL)
			printf("Owner: %s\n", d->owner);
	}
	else
		return;
}

