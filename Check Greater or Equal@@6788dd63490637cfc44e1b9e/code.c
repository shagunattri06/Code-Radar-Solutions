#include <stdio.h>

int main() {
    int a, b;
    scanf("%d %d", &a, &b); 

    if ((a - b) >> 31) 
        printf("No\n");
    else
        printf("Yes\n");

    return 0;
}
