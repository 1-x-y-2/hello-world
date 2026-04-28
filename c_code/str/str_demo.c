#include <stdio.h>
#include <string.h>

int main() {
  char greeting[50] = "Hello";
  char name[20];

  scanf("%s", name);

  strcat(greeting, ", ");
  strcat(greeting, name);
  strcat(greeting, "!");
  
  printf("%s\n", greeting);

  printf("len=%d\n", strlen(greeting));

  if (strcmp(name, "xy") == 0)
    printf("Yes\n");
  else
    printf("No\n");

  return 0;
}