/**
Problem 1
Write a program that prints out each number and its corresponding word.
Numbers divisible by 3 print FIZZ, numbers divisible by 5 print BUZZ
numbers divisible by 3 and 5 print FIZZBUZZ
@author garbagman
**/
#include <stdio.h>

int main() {
  // CODE HERE
  int i = 1;

  for (; i <= 100; i++) {
    printf("%d ", i);
    if (i % 3 == 0) {
      printf("FIZZ");
    }
    if (i % 5 == 0) {
      printf("BUZZ");
    }
    printf("\n");
  }

  return 0;
}
