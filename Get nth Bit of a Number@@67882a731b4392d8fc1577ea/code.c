#include <stdio.h>

int main() {
    int num, n;

    scanf("%d %d", &num, &n);

    int nth_bit = (num >> n) & 1;

    // Print the value of the nth bit
    printf("%d\n", n, nth_bit);

    return 0;
}
