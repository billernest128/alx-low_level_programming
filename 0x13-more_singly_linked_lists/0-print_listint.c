#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/* structure for listint_t nodes */
typedef struct ListIntNode {
    int value;
    struct ListIntNode *next;
} ListIntNode;

/* structure for listint_t list */
typedef struct ListInt {
    ListIntNode *head;
    ListIntNode *tail;
    size_t length;
} ListInt;

/* function to create a new listint_t list */
ListInt *create_listint(void) {
    ListInt *list = (ListInt *)malloc(sizeof(ListInt));
    if (list == NULL) {
        perror("create_listint");
        exit(EXIT_FAILURE);
    }
    list->head = NULL;
    list->tail = NULL;
    list->length = 0;
    return list;
}

/* function to append a new value to the end of a listint_t list */
void append_listint(ListInt *list, int value) {
    ListIntNode *node = (ListIntNode *)malloc(sizeof(ListIntNode));
    if (node == NULL) {
        perror("append_listint");
        exit(EXIT_FAILURE);
    }
    node->value = value;
    node->next = NULL;
    if (list->tail == NULL) {
        list->head = node;
        list->tail = node;
    } else {
        list->tail->next = node;
        list->tail = node;
    }
    list->length++;
}

/* function to print all the elements of a listint_t list */
size_t print_listint(const ListInt *list) {
    size_t count = 0;
    ListIntNode *current = list->head;
    while (current != NULL) {
        printf("%d ", current->value);
        current = current->next;
        count++;
    }
    printf("\n");
    return count;
}
