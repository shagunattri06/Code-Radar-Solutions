#include <stdio.h>

int main() {
    int age;
    scanf("%d", &age); 

    if (age >= 18)
        printf("Eligible\n");
    else
        printf("Not eligible\n");

    return 0;
}

