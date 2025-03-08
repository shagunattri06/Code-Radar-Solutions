#include <stdio.h>

int main() {
    int marks;
    scanf("%d", &marks); 

    char grade = (marks >= 90) ? 'A' :
                 (marks >= 80) ? 'B' :
                 (marks >= 70) ? 'C' :
                 (marks >= 60) ? 'D' : 'F'; 

    printf("%c\n", grade); 

    return 0;
}
