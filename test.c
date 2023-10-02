// memory dedicated to this app = 100mb

#include <stdio.h>
#include <stdbool.h>

int main() {
    int num = 5;
    float number;
    long int aLong1 = 345564354;
    long int * liPtr1 = &aLong1;
    long int aLong2 = 325564354;
    long int * liPtr2 = &aLong2;
    bool myBool;
    char c = "c";
    int nums[3] = {1, 2, 3};
    for (int i = 0; i < 3; i++) {
        printf("Array index: %d; element: %d\n", i, * (nums + i));
    }
    // allocate memory of 4 bytes to this int num
    int * ptr = &num;
    printf("%u\n", liPtr1);
    printf("%u\n", liPtr1 + 1);
    printf("%u\n", liPtr2);
    printf("%d\n", *(liPtr1 + 1));
    printf("%d\n", *liPtr2);
    return 0;
}