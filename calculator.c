#include <stdio.h>

// Function Declarations
int add(int a, int b);
int subtract(int a, int b);
int multiply(int a, int b);
float divide(int a, int b);
int power(int base, int exp);
int factorial(int n);

//  Main Function
int main() {
    int choice;

    while(1) {
        printf("\n Smart Calculator \n");
        printf("1. Addition\n");
        printf("2. Subtraction\n");
        printf("3. Multiplication\n");
        printf("4. Division\n");
        printf("5. Power\n");
        printf("6. Factorial\n");
        printf("0. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        if(choice == 0) {
            printf("Exiting...\n");
            break;
        }

        switch(choice) {

            case 1: {
                int a, b;
                printf("Enter two numbers: ");
                scanf("%d %d", &a, &b);
                printf("Result = %d\n", add(a, b));
                break;
            }

            case 2: {
                int a, b;
                printf("Enter two numbers: ");
                scanf("%d %d", &a, &b);
                printf("Result = %d\n", subtract(a, b));
                break;
            }

            case 3: {
                int a, b;
                printf("Enter two numbers: ");
                scanf("%d %d", &a, &b);
                printf("Result = %d\n", multiply(a, b));
                break;
            }

            case 4: {
                int a, b;
                printf("Enter two numbers: ");
                scanf("%d %d", &a, &b);

                if(b == 0) {
                    printf("Cannot divide by zero!\n");
                } else {
                    printf("Result = %.2f\n", divide(a, b));
                }
                break;
            }

            case 5: {
                int base, exp;
                printf("Enter base and exponent: ");
                scanf("%d %d", &base, &exp);
                printf("Result = %d\n", power(base, exp));
                break;
            }

            case 6: {
                int num;
                printf("Enter a number: ");
                scanf("%d", &num);

                if(num < 0) {
                    printf("Factorial not defined for negative numbers!\n");
                } else {
                    printf("Result = %d\n", factorial(num));
                }
                break;
            }

            default:
                printf("Invalid choice!\n");
        }
    }

    return 0;
}

// Function Definitions
int add(int a, int b) {
    return a + b;
}

int subtract(int a, int b) {
    return a - b;
}

int multiply(int a, int b) {
    return a * b;
}

float divide(int a, int b) {
    return (float)a / b;
}

int power(int base, int exp) {
    int result = 1;
    for(int i = 1; i <= exp; i++) {
        result *= base;
    }
    return result;
}

int factorial(int n) {
    if(n == 0 || n == 1)
        return 1;
    return n * factorial(n - 1);
}