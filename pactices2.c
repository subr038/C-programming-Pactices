//
// Created by SUBRATA on 01/10/2024.
//

#include <stdio.h>
int main() {
    char operation,raw;
    double num1,num2;
    jump:
    printf("Enter operation (+,-,*,/):");
    scanf("%c", &operation);
    printf("Enter two numbers: :");
    scanf("%lf %lf", &num1, &num2);
    switch (operation) {
        case '+':
            printf("%.2lf+ %.2lf=%.2lf",num1,num2,num1+num2);
        break;
        case '-':
            printf("%.2lf - %.2lf=%.2lf",num1,num2,num1-num2);
        break;
        case '*':
            printf("%.2lf * %.2lf=%.2lf",num1,num2,num1*num2);
        break;
        case '/':
            printf("%.2lf * %.2lf=%.2lf",num1,num2,num1*num2);

        default:
            printf("Error, Invalid Operation");
        scanf("%c", &raw);
        goto jump;


    }
}
