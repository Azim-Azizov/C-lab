#include <stdio.h>


int counter(short n);

int main() {
    short n;
    scanf("%hd", &n);
    printf("%d", counter(n));
}

int counter(short n) {
    int count = 0;
    for (short i = 10; i < 100; i++) {
        short tmp = i * n;
        short sum1 = i % 10 + i / 10;
        short sum2 = 0;
        while (tmp > 0) {
            sum2 += tmp % 10;
            tmp /= 10;
        }
        if (sum1 == sum2) count++;
    }
    return count;
}