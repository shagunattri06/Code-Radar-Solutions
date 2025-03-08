#include <stdio.h>

int main() {
    int a, b;
    scanf("%d %d", &a, &b); 

    int max = ((a - b) >> 31) & 1 ? b : a; 
    printf("%d\n", max); 

    return 0;
}
