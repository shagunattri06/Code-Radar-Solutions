#include <stdio.h>

int main() {
    char op;
    double num1, num2, result;

    scanf(" %c %lf %lf", &op, &num1, &num2);

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

    printf("Result: %.2lf\n", result);

    return 0;
}
