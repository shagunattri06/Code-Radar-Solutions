#include <stdio.h>

int main() {
    int num1, num2;

    // Read two integers using scanf
    scanf("%d %d", &num1, &num2);

    // Check if the first number is less than the second number
    if (num1 < num2) {
        printf("True\n");
    } else {
        printf("False\n");
    }

    return 0;
}
