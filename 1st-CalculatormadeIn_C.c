#include <stdio.h>

int main() {

    char operator;
    double num1, num2, result;
    char again;

    // Keep the calculator running
    while (1) {

        printf("\n=========================================\n");
        printf("           SIMPLE CALCULATOR\n");
        printf("=========================================\n");

        // Ask the user for the numbers
        printf("\nEnter first number: ");
        scanf("%lf", &num1);

        printf("Enter an operator (+, -, *, /): ");
        scanf(" %c", &operator);

        printf("Enter second number: ");
        scanf("%lf", &num2);

        // Determine the operation
        switch (operator) {

            case '+':
                result = num1 + num2;
                printf("\nResult: %.2lf\n", result);
                break;

            case '-':
                result = num1 - num2;
                printf("\nResult: %.2lf\n", result);
                break;

            case '*':
                result = num1 * num2;
                printf("\nResult: %.2lf\n", result);
                break;

            case '/':

                // Prevent division by zero
                if (num2 == 0) {
                    printf("\nError: Cannot divide by zero!\n");
                }
                else {
                    result = num1 / num2;
                    printf("\nResult: %.2lf\n", result);
                }

                break;

            default:
                printf("\nInvalid operator!\n");
        }

        // Ask if the user wants to calculate again
        printf("\nWould you like to calculate again? (Y/N): ");
        scanf(" %c", &again);

        if (again != 'Y' && again != 'y') {
            break;
        }
    }

    printf("\n=========================================\n");
    printf("       Thank you for using the\n");
    printf("          Simple Calculator!\n");
    printf("=========================================\n");

    return 0;
}
