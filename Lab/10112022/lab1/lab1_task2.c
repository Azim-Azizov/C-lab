#include <stdio.h>

int main() {
    short n;
    scanf("%hd", &n);
    short count = 0;
    float sum = 0;
    for (short i = 0; i < n; i++) {
        float temp;
        scanf("%f", &temp);
        if (temp < 0) {
            count++;
            sum += temp;
        }
    }
    printf("%d %.2f", count, sum);
}