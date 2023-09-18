#include <stdio.h>

int main() {
    char mystr[5] = "Hello";
    char mystr2[10] = "World!";
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    printf("The number you entered is %d.\n", n);
    printf(n > 0 ? "You entered positive number.\n" : n < 0 ? "You entered negative number.\n" : "You entered zero.\n");
    n > 0 ? printf("You entered positive number.\n") : n < 0 ? printf("You entered negative number.\n") : printf("You entered zero.\n");
    printf("%s %s\n", mystr, mystr2);
    printf("%d", mystr[6]);
    return 0;
}