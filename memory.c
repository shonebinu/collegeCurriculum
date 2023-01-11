#include <stdio.h>

int main()
{

  int age = 30;
  double gpa = 3.4;
  char grade = 'A';

  printf("age: %p\ngpa: %p\ngrade: %p", &age, &gpa, &grade); // %p is pointer

  return 0;
}