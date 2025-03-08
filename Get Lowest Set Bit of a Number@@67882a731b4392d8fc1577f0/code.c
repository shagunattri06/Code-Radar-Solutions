#include <stdio.h>

int main() {
    int num, position = 0;

    scanf("%d", &num); 

    if (num == 0) {
        printf("-1\n"); 
        return 0;
    }

    while ((num & 1) == 0) { 
        num >>= 1; 
        position++;
    }

    printf("%d\n", position); 

    return 0;
}

