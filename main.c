#include <stdio.h>
#include <string.h>

// My own type of isHappy (Bool kind)
typedef enum { FALSE = 0, TRUE = 1 } isHappy;

// Definition of a struct for a cat
struct Cat {
  char name[50];
  int age;
  isHappy catStatus; // My own type of data
};

int main() {
  struct Cat aCat;
  printf("What is your pet's name?\n");
  scanf("%s", aCat.name);
  printf("What is you pet's age? (In years)\n");
  scanf("%d", &aCat.age);
  printf("Is your cat happy? (yes/no)\n");
  char answer[3];
  scanf("%s", answer);
  if (strcmp(answer, "yes") == 0) {
    aCat.catStatus = TRUE;
  } else {
    aCat.catStatus = FALSE;
  }
  printf("--------------------------------\n");
  printf("Cat's name : %s\n", aCat.name);
  printf("Cat's age : %d\n", aCat.age);
  printf("Cat's status:\n");
  if (aCat.catStatus == 1) {
    printf("%s is happy ^^\n", aCat.name);
  } else {

    printf("%s is sad :c\n", aCat.name);
  }
  printf("--------------------------------\n");
  // Declaration of a pointer to a struct type Cat
  struct Cat *pCat;
  pCat = &aCat;
  printf("Acces to the aCat data through a pointer\n");
  printf("Cat's name through a pointer : %s\n", pCat->name);
  printf("Cat's age through a pointer : %d\n", pCat->age);
  printf("Cat's status through a pointer:\n");
  if (pCat->catStatus == 1) {
    printf("%s is happy ^^", aCat.name);
  } else {

    printf("%s is sad :c", aCat.name);
  }

  return 0;
}
