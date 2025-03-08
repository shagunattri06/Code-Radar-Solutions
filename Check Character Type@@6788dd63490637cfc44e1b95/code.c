#include <stdio.h>

int main() {
    char ch;
    scanf("%c", &ch); 

    if ((ch | 32) == 'a' || (ch | 32) == 'e' || (ch | 32) == 'i' || (ch | 32) == 'o' || (ch | 32) == 'u') 
        printf("Vowel\n");
    else if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z')) 
        printf("Consonant\n");
    else if (ch >= '0' && ch <= '9') 
        printf("Digit\n");
    else 
        printf("Special Character\n");

    return 0;
}
