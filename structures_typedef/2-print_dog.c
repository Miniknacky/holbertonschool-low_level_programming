#include "dog.h"
#include <stdio.h>

/**
 * print_dog - Prints information about a dog.
 * @d: Pointer to the struct dog.
 *
 * If an element of d is NULL, it prints (nil) instead of this element.
 * (e.g., if name is NULL, print Name: (nil))
 * If d is NULL, it prints nothing.
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;

	printf("Name: %s\n", (d->name != NULL) ? d->name : "(nil)");
	printf("Age: %.6f\n", d->age);
	printf("Owner: %s\n", (d->owner != NULL) ? d->owner : "(nil)");
}

