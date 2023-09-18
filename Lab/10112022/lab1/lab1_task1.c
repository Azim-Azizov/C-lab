#include <stdio.h>

int main() {
    short n;
    scanf("%hd", &n);
    float res = 0;
    for (short i = 0; i < n; i++) {
        float temp;
        scanf("%f", &temp);
        if (temp > res) {
            res = temp;
        } else if (temp < -res) {
            res = -temp;
        }
    }
    printf("%.2f", res);
}