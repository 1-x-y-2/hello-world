#include <stdio.h>

typedef struct Studnode {
  int no;
  char name[8];
  char sex[2];
  char class[4];
  struct Studnode *next;
} StudType;

int main() {
  return 0;
  
}