#include <stdio.h>

int main() {
    int num;
    scanf("%d", &num); 

    if (num) 
        printf("%s\n", (num >> 31) ? "Negative" : "Positive");
    else
        printf("Zero\n");

    return 0;
}
