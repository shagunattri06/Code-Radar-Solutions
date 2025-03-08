#include <stdio.h>

int main() {
    int a, b;
    scanf("%d %d", &a, &b); 

    if ((a - b) >> 31) 
        printf("B is greater\n");
    else
        printf("A is greater or equal\n");

    return 0;
}
