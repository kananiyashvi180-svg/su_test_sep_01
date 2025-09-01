#include <stdio.h>

int main() {
    int choice;
    float num1, num2, result;

    do {
        
        printf("Enter your choice: ");
        scanf("%d", &choice);

        if (choice >= 1 && choice <= 4) {
            printf("Enter first number: ");
            scanf("%f", &num1);
            printf("Enter second number: ");
            scanf("%f", &num2);

            if (choice == 1) {
                result = num1 + num2;
                printf("Result = %.2f\n", result);
            } else if (choice == 2) {
                result = num1 - num2;
                printf("Result = %.2f\n", result);
            } else if (choice == 3) {
                result = num1 * num2;
                printf("Result = %.2f\n", result);
            } else if (choice == 4) {
                if (num2 != 0)
                    result = num1 / num2;
                else
                    printf("Error! Division by zero not allowed.\n");
            }
        } else if (choice != 5) {
            printf("Invalid choice! Please try again.\n");
        }

    } while (choice != 5);

    printf("Calculator closed. Goodbye!\n");
    return 0;
}
