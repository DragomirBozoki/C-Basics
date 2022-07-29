#include <stdio.h>
#include <stdlib.h>

int main()
{
    double num1;
    double num2;
    char op;

    printf("Enter number: ");
    scanf("%lf", &num1);

    printf("Enter number 2: ");
    scanf("%lf", &num2);

    printf("Enter operator(+,-,/,*): ");
    scanf(" %c", &op);

    if(op == '+')
    {
        printf("%f", num1 + num2);
    } else if(op == '-'){
        printf("%f", num1 - num2);
    }
    else if(op == '/'){
        printf("%f", num1 / num2);
    }
    else if(op == '*'){
        printf("%f", num1 * num2);
    }
    else {
        printf("Non Valid input! ");
    }


    return 0;
}

