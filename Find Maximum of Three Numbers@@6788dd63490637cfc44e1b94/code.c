#include <stdio.h>

int main() {
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c); 

    int max = ((a - b) >> 31) & 1 ? b : a;
    max = ((max - c) >> 31) & 1 ? c : max; 
    printf("%d\n", max); 

    return 0;
}
