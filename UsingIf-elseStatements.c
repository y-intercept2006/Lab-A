// CASTOR, JOMARY ANDREW M.  DIT 1-2
#include <stdio.h>

int main() {
    // USING IF-ELSE STATEMENTS
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    if (number % 2 == 0) {
        printf("Number %d is even.\n", number);
    } else {
        printf("Number %d is odd.\n", number);
    }

    return 0;
}
