#include <stdio.h>

int main() {
    int num1, num2;
    scanf("%d %d", &num1, &num2); 

    if (num2 != 0 && num1 % num2 == 0)
        printf("Multiple\n");
    else
        printf("Not a Multiple\n");

    return 0;
}
