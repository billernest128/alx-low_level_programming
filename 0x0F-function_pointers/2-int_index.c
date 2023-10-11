#include <stddef.h>

int int_index(int *array, int size, int (*cmp)(int)) {
  int i;

  /* Check if the array is NULL. */
  if (array == NULL) {
    return -1;
  }

  /* Check if the size is less than or equal to 0. */
  if (size <= 0) {
    return -1;
  }

  /* Check if the cmp pointer is NULL. */
  if (cmp == NULL) {
    return -1;
  }

  /* Iterate over the array and compare each element to the target value using the cmp function. */
  for (i = 0; i < size; i++) {
    if (cmp(array[i]) == 0) {
      return i;
    }
  }

  /* If no element matches, return -1. */
  return -1;
}

