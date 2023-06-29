#include <stdio.h>
#include <string.h>

struct Student // better to start a struct with a cap letter
{
  char name[50];
  char major[50];
  int age;
  double gpa;
};

int main()
{
  struct Student student1;
  student1.age = 22;
  student1.gpa = 3.2;

  // student.name = "something"; this will not work.
  strcpy(student1.name, "Shone"); // instead use strcpy() with string.h header file
  strcpy(student1.major, "Computer Science");

  printf("%f\n", student1.gpa);
  printf("%s\n", student1.name);

  struct Student student2;
  student2.age = 20;
  student2.gpa = 5.2;
  strcpy(student2.name, "Pan");
  strcpy(student2.major, "Art");

  printf("%f\n", student2.gpa);
  printf("%s\n", student2.name);

  return 0;
}