/**
Problem 3
Write a function reverse_array, that given an array, returns an array with the
same contents in the opposite order. This is an array of integers for simplicity.
@author garbagman
**/
#include <stdio.h>
#define TEST_ARRAY {1,2,3,4}
#define TEST_SIZE 4

int * reverse_array(int * array, int array_size) {
  // CODE GOES HERE

}

int main() {
  int array[TEST_SIZE] = TEST_ARRAY;
  int * reversed;
  int i;

  reversed = reverse_array(array, TEST_SIZE);

  for (i = 0; i < TEST_SIZE; i++) {
    printf("%d ", reversed[i]);
  }
  printf("\n");

  return 0;
}
