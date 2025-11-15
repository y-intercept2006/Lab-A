// CASTOR, JOMARY ANDREW M.  YR/SEC: DIT 1-2
#include <stdio.h> 
int main () {
// ASSIGNING VALUES TO VARIABLES
int a = 30 , b = 6;
int sum, difference, product;
float quotient;

// #1 USING ARITHMETIC OPERATORS
printf("--- Using Arithmetic Operators ---\n\n");
sum = a + b;
difference = a - b;
product = a * b;
quotient = a / b;

printf("The sum of %d and %d is %d.\n", a, b, sum);
printf("The difference of %d and %d is %d.\n", a, b, difference);
printf("The product of %d and %d is %d.\n", a, b, product);
printf("The quotient of %d and %d is %.2f.\n", a, b, quotient);

// #2 USING LOGICAL OPERATORS

// Using AND Operator - &&
printf("\n--- Using Logical Operators ---\n");
int x = 10; 
int y = 50; 

printf("(x > 9) && (y < 51): %d", (x > 9) && (y < 51)); // true - 1
printf("\n(x > 11) && (y < 49): %d", (x > 11) && (y < 49)); // false - 0

// Using OR Operator - ||
printf("\n(x > 6) || (y < 51): %d", (x > 6) || (y < 51)); //true - 1
printf("\n(y < 45) || (x > 15): %d", (y < 45) || (x > 15)); //false - 0

// Using NOT Operator - !
printf("\n!(x < 5): %d", !(x < 5)); //true - 1
printf("\n!(y < 60): %d", !(y < 60)); //false - 0

// #3 USING ASSIGNMENT OPERATORS
printf("\n\n--- Using Assignment Operators ---\n");
int p = 5, q = 10, r = 30, c = 15, z = 503, f = 35.0;

printf("p = 5: %d\n", p = 5);
printf("q += 3: %d\n", q += 3);
printf("r -= 10: %d\n", r -= 10);
printf("c *= 2: %d\n", c *= 2);
printf("f /= 3: %.1f\n", f /= 3);
printf("z %%= 10: %d\n", z %= 10);

return 0;

}
