#include <stdio.h>
#include <string.h>

struct dog {
    char name[50];
    float age;
    char owner[50];
};

void init_dog(struct dog *d, char *name, float age, char *owner) {
    strncpy(d->name, name, sizeof(d->name));
    strncpy(d->owner, owner, sizeof(d->owner));
    d->age = age;
}

int main(void) {
    struct dog myDog;
    init_dog(&myDog, "Buddy", 3.5, "John Doe");

    printf("Name: %s\nAge: %.2f years\nOwner: %s\n", myDog.name, myDog.age, myDog.owner);
    return 0;
}

