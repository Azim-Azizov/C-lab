#include <stdio.h>


int main() {
    int N;
    scanf("%d", &N);
    N > 2 ? printf("%d", N * (N - 1) * (N - 2)) : printf("%d", N);
}