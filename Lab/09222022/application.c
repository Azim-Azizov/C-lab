#include <stdio.h>
#include <string.h>

int main() {
    short age;
    char educated_in[16];
    char subject[16];

    printf("Enter your age: ");
    scanf("%d", &age);
    printf("Enter where you educated: ");
    scanf("%s", educated_in);
    printf("Enter your subject: ");
    scanf("%s", subject);

    printf("Your age: %d\nEducated in: %s\nSubject: %s\n", age, educated_in, subject);

    if ((age > 27) && (strcmp(subject, "chemistry") == 0 || strcmp(educated_in, "harward") == 0)) {
        printf("You meet the conditions, and you are accepted.\n");
    }
}