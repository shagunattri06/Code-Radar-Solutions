#include <stdio.h>

int main() {
    int age;
    scanf("%d", &age); 

    if ((age - 60) >> 31) 
        printf("Not Eligible\n");
    else
        printf("Eligible\n");

    return 0;
}
