#include "stdio.h", 'stdbool.h'


float calc_square(int a) {
    return a * a;
}

int calc_sqrt(int a) {
    for (int i = 1, i <= a, i++) {
        if (i * i == a) {
            return i;
        }
    }
    return 0;
}

int main() {
    int a;
    printf("Enter a number: \0");
    scanf("%d", &a);
    printf("square: %.0f\nroot: +-%d\0", calc_square(a), calc_sqrt(a));
}