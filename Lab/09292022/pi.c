#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>


int main() {
    char pi[32];
    printf("Enter approximate value of pi that you want to know in terms: ");
    scanf("%s", &pi);
    double fpi = atof(pi);
    double initial = 0;
    int dn = 1;
    while (true) {
        initial += (4.0 / dn) - (4.0 / (dn + 2));
        dn += 4;
        printf("%d - %.32f\n", dn / 4, initial);
        if (fpi * pow(10, strlen(pi) - 2) == round(initial * pow(10, strlen(pi) - 2))) {
            printf("Terms used: %d", dn / 4);
            break;
        }
    }
    return 0;
}