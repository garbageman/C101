/**
Problem 4
Write a function string_copy, that given an given two strings, copies the first
into the second.
@author garbagman
**/
#include <stdio.h>
#include <string.h>
#define STRING_LENGTH 10
#define TEST_SIZE 4

void string_copy(char * s1, char * s2) {
  // CODE GOES HERE
  int len = strlen(s1);
  int i = 0;

  for (; i < len; i++) {
    s2[i] = s1[i];
  }
  s2[len] = '\0';
}

int main() {
  char s1[STRING_LENGTH] = "UMD";
  char s2[STRING_LENGTH];

  string_copy(s1, s2);

  printf("S2 is %s\n",s2);

  return 0;
}
