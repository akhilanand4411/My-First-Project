#include <stdio.h>

int main() {
    char op;
    double a, b;

    printf("Enter an operator (+ - * /): ");
    scanf(" %c", &op);

    printf("Enter two numbers: ");
    scanf("%lf %lf", &a, &b);

    switch (op) {
        case '+': printf("%.1lf + %.1lf = %.1lf\n", a, b, a + b); break;
        case '-': printf("%.1lf - %.1lf = %.1lf\n", a, b, a - b); break;
        case '*': printf("%.1lf * %.1lf = %.1lf\n", a, b, a * b); break;
        case '/':
            if (b != 0) printf("%.1lf / %.1lf = %.1lf\n", a, b, a / b);
            else printf("Error: Division by zero\n");
            break;
        default: printf("Invalid operator\n");
    }
    return 0;
}

