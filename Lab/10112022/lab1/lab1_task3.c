#include <stdio.h>

int main() {
    short n;
    scanf("%hd", &n);
    switch (n / 3) {
        case 1:
            printf("Spring");
            break;
        case 2:
            printf("Summer");
            break;
        case 3:
            printf("Autumn");
            break;
        default:
            printf("Winter");
            break;
    }
}