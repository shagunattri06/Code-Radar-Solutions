#include <stdio.h>

int main() {
    int a, b;
    scanf("%d %d", &a, &b); 

    if (a == b)
        printf("Equal\n");
    else if ((a - b) >> 31) 
        printf("Second\n");
    else
        printf("First\n");

    return 0;
}
