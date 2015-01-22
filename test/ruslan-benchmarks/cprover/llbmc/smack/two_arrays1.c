#include <stdio.h>
/* #include <stdlib.h> */
#include "smack.h"

#define MAXSIZE 50
#define RESET 0
#define SET 1

typedef struct {
  short data;
  int count;
  char status;
} elem;

inline void resetArray(elem *array) {
  int i = 0;

  for (i = 0; i < MAXSIZE; i++) {
    array[i].status = RESET;
  }
}

inline void setArray(elem *array) {
  int i = 0;

  for (i = 0; i < MAXSIZE; i++) {
    array[i].status = SET;
  }
}

inline void initializeCount(elem *array) {
  int i = 0;

  for (i = 0; i < MAXSIZE; i++) {
    array[i].count = 0;
  }
}

int main() {
  int i = 0;
  elem *arrayOne = (elem*)malloc(MAXSIZE * sizeof(elem));
  elem *arrayTwo = (elem*)malloc(MAXSIZE * sizeof(elem));

  resetArray(arrayOne);
  setArray(arrayTwo);
  initializeCount(arrayTwo);

  for (i = 0; i < MAXSIZE; i++) {
    __SMACK_assert(arrayOne[i].status == RESET);
    __SMACK_assert(arrayTwo[i].status == SET);
    __SMACK_assert(arrayTwo[i].count == 0);
  }

  initializeCount(arrayOne);
  setArray(arrayOne);
  resetArray(arrayTwo);

  for (i = 0; i < MAXSIZE; i++) {
    __SMACK_assert(arrayOne[i].count == 0);
    __SMACK_assert(arrayOne[i].status == SET);
    __SMACK_assert(arrayTwo[i].status == RESET);
  }

  free(arrayOne);
  free(arrayTwo);
  return 0;
}

