#include <stdio.h>
#include <string.h>

typedef struct {
  char name[50];
  int age;
  double score;
} Student;

void printStudent(Student *p) {
  printf("name:%s, age:%d, score:%.2f\n", p -> name, p -> age, p -> score);
}

int main(void) {
  Student s1 = {"xy", 18, 99.99};
  Student s2 = {.age = 19, .name = "yx", .score = 88.88};

  printStudent(&s1);
  printStudent(&s2);

  s1.age = 22;
  s1.score = 100;

  printf("\nafter revise\n");
  printStudent(&s1);

  return 0;
}