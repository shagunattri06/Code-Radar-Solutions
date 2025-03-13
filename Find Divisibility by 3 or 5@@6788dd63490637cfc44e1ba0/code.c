#include <stdio.h>

int main() {
    int num;
  
    scanf("%d", &num);

    if (num % 3 == 0 && num % 5 == 0) {
        printf("The number is divisible by both 3 and 5.\n");
    } else if (num % 3 == 0) {
        printf("Divisible by 3\n");
    } else if (num % 5 == 0) {
        printf("Divisible by both\n");
    } else {
        printf("The number is neither divisible by 3 nor by 5.\n");
    }

    return 0;
}
