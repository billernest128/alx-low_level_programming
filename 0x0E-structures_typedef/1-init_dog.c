#include <stdio.h>
#include <string.h>


void init_dog(struct dog *d, char *name, float age, char *owner)

{
	strncpy(d->name, name, sizeof(d->name));
	strncpy(d->owner, owner, sizeof(d->owner));
	d->age = age;
}

int main(void)
{
	struct dog myDog;
	init_dog(&myDog, "Buddy", 3.5, "John Doe");
	printf("Name: %s\nAge: %.2f years\nOwner: %s\n", Dog.name, Dog.age, Dog.ownr);
	return (0);
}

