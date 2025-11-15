//CASTOR, JOMARY ANDREW M.  DIT 1-2
#include <stdio.h>

int main () {
// USING LOOPS
  
// # while loop
printf("1. While Loop\n");
int i = 1;
  printf("\nNumbers from 1 to 10.\n");
  while (i < 11) {
    printf("%d\n", i);
    i++;
  }

// # for loop
printf("\n2. For Loop\n");
  int x;
  printf("\nEven numbers from 2 to 20.");
  for (x = 2; x <= 20; x = x + 2) {
    printf("\n%d", x);
  }
  
// # do-while loop
printf("\n\n3. Do While Loop\n");
    int c = 1;
  printf("\nNumbers from 1 to 5.\n");
  do {
    printf("%d\n", c);
    c++;
  }
  while (c < 5.1);



    return 0;
}