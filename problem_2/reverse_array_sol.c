/**
Problem 2
Write a function reverse_array, that given an array, returns an array with the
same contents in the opposite order. This is an array of integers for simplicity.
@author garbagman
**/
#include <stdio.h>
#define TEST_ARRAY {1,2,3,4}
#define TEST_SIZE 4

int * reverse_array(int * array, int array_size) {
  // CODE GOES HERE
  int i = 0;
  int temp;

  for (; i < array_size / 2; i++) {
    temp = array[i];
    array[i] = array[array_size - i - 1];
    array[array_size - i - 1] = temp;
  }

  return array;
}

int main() {
  int array[4] = TEST_ARRAY;
  int * reversed;
  int i;

  reversed = reverse_array(array, TEST_SIZE);

  for (i = 0; i < 4; i++) {
    printf("%d ", reversed[i]);
  }
  printf("\n");

  return 0;
}
