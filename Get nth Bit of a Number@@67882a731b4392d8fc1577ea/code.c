#include <stdio.h>

int main() {
    
    int num = ("%d");  
    int n = ("%d");     

    int bit = (num >> n) & 1;  
    printf("%d\n", n, num, bit);

    return 0;
}

