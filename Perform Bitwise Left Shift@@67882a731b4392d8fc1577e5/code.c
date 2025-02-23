#include <stdio.h>

int main() {
    int num, shiftAmount, result;

    scanf("%d %d", &num, &shiftAmount);

    result = num << shiftAmount;

    printf("%d\n", result);

    return 0;
}
