#include <stdio.h>

int main() {
    int num1, num2;

   
    scanf("%d %d", &num1, &num2);

    if (num1 > num2) {
        printf("The first number is greater than the second number.\n");
    } else {
        printf("The first number is not greater than the second number.\n");
    }

    return 0;
}
