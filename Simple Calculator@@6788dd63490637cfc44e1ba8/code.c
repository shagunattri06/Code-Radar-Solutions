#include <stdio.h>

int main() {
    double num1, num2, result;
    char op;

    scanf("%lf %lf %c", &num1, &num2, &op);

    switch (op) {
        case '+': result = num1 + num2; break;
        case '-': result = num1 - num2; break;
        case '*': result = num1 * num2; break;
        case '/': 
            if (num2 != 0)
                result = num1 / num2;
            else {
                printf("Error: Division by zero\n");
                return 1;
            }
            break;
        default: 
            printf("Invalid Operator\n");
            return 1;
    }

    printf("%.2lf\n", result);

    return 0;
}
