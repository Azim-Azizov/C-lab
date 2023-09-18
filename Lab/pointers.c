#include <stdio.h>


int main() {
    int x = 10;
    int y = 20;
    int z = 30;


    printf("x - %p\n", &x);
    printf("y - %p\n", &x - 1);
    printf("y - %p\n", &y);
    printf("z - %p\n", &z);

    int * ptr = & x;

    printf("Enter the value: ");

    scanf("%d", ptr - 1);

    printf("%d", y);
    y != 20 ? printf("Changed.") : printf("unchanged.");
}