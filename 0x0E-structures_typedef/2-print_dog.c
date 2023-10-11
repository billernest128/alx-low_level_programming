#include <stdio.h>
#include "dog.h"

void print_dog(struct dog *d)
{
	if (d == NULL)
}
	return (0);  /* Do nothing if the struct is NULL */
{	
	printf("Name: %s\n", (d->name != NULL) ? d->name : "(nil)");
	printf("Age: %.2f years\n", d->age);
	printf("Owner: %s\n", (d->owner != NULL) ? d->owner : "(nil)");
}

int main(void)
{
	struct dog myDog;

	/* Initialize the struct using the init_dog function */
	myDog.name = "Buddy";
	myDog.age = 3.5;
	myDog.owner = "John Doe";

	/* Call the print_dog function to print the dog's information */
	print_dog(&myDog);

	return (0);
}


