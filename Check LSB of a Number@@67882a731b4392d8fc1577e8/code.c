#include <stdio.h>

int main() {
    int num;

    // Read an integer using scanf
    scanf("%d", &num);

    // Check if the least significant bit is set to 1 or 0
    if (num & 1) {
        printf("Set\n");
    } else {
        printf("Not Set\n");
    }

    return 0;
}
