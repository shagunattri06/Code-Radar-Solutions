#include <stdio.h>

int main() {
    int num, i, binaryStarted = 0;
    scanf("%d", &num); 

    for (i = 31; i >= 0; i--) { 
        if ((num >> i) & 1) {
            binaryStarted = 1; 
        }
        if (binaryStarted) {
            printf("%d", (num >> i) & 1);
        }
    }

    if (!binaryStarted) printf("0"); 

    printf("\n");
    return 0;
}
