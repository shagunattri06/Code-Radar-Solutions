#include <stdio.h>

int main() {
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c); 

    if ((a + b - c) * (a + c - b) * (b + c - a) > 0)
        printf("Valid Triangle\n");
    else
        printf("Invalid Triangle\n");

    return 0;
}
