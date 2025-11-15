// CASTOR, JOMARY ANDREW M.  DIT 1-2
#include <stdio.h>
#include <string.h>

int main () {

// DECLARING VARIABLES
    int age;
    float height;
    double weight;
    char initial;
    char name[20];
// ASSIGNING VALUES TO VARIABLES
    age = 18;
    height = 1.68;
    weight = 57.55;
    initial = 'J';
    strcpy(name, "Jomary");

    printf("My name is %s.\n", name);
    printf("My initial is %c.\n", initial);
    printf("I am %d years old.\n", age);
    printf("My height is %.2f m.\n", height);
    printf("My weight is %.lf kg.\n", weight);
    

    return 0;
} 