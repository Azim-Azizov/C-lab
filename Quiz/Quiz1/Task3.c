#include <stdio.h>
#include <math.h>


void calc_quadro(long int a, long int b, long int c);

int main() {
    long int a, b, c;
    scanf("%ld %ld %ld", &a, &b, &c);
    calc_quadro(a, b, c);
}

void calc_quadro(long int a, long int b, long int c) {
    long int dis = (b * b) + (-4 * a * c);
    if (dis > 0) {
        printf("Two roots: %ld %ld", ((-b) - (unsigned int)sqrtl(dis)) / (2 * a), ((-b) + (unsigned int)sqrtl(dis)) / (2 * a));
    } else if (dis == 0) {
        printf("One root: %ld", (-b) / (2 * a));
    } else {
        printf("No roots");
    }
}