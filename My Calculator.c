#include <stdio.h>
#include <string.h>

double num1, num2;

void input()
{
//to take input
    printf("Enter first number: ");
    scanf("%lf", &num1);

    printf("Enter second number: ");
    scanf("%lf", &num2);
}

int main()
{
    char caltype[30];
    char operator;

    printf("Hello User\n");
    printf("Do you want to continue with \"Normal calculator\" or \"Easy calculator\"?\nNote:This is case sensitive so make sure you entered exactly what you want as it is including caps");

    fgets(caltype, sizeof(caltype), stdin);

    // Remove newline character type
    caltype[strcspn(caltype, "\n")] = '\0';

    if (strcmp(caltype, "Normal calculator") == 0)
    {
        printf("Enter first number: ");
        scanf("%lf", &num1);

        printf("Enter operator (+, -, *, /): ");
        scanf(" %c", &operator);

        printf("Enter second number: ");
        scanf("%lf", &num2);

        switch (operator)
        {
            case '+':
                printf("Sum = %lf\n", num1 + num2);
                break;

            case '-':
                printf("Difference = %lf\n", num1 - num2);
                break;

            case '*':
                printf("Product = %lf\n", num1 * num2);
                break;

            case '/':
                if (num2 != 0)
                    printf("Quotient = %lf\n", num1 / num2);
                else
                    printf("Error! Division by zero is not allowed.\n");
                break;

            default:
                printf("Invalid operator!\n");
        }
    }
    else if (strcmp(caltype, "Easy calculator") == 0)
    {
        input();

        printf("\nResults:\n");
        printf("Sum = %.2lf\n", num1 + num2);
        printf("Difference = %.2lf\n", num1 - num2);
        printf("Product = %.2lf\n", num1 * num2);

        if (num2 != 0)
            printf("Quotient = %.2lf\n", num1 / num2);
        else
            printf("Quotient = Undefined (Division by zero)\n");
    }
    else
    {
        printf("Invalid input!\n");
        printf("Please enter exactly:\n");
        printf("Normal calculator\n");
        printf("or\n");
        printf("Easy calculator\n");
    }

    return 0;
}