#include <stdio.h>

int main() {
    int a, b;
    int fact = 1; 

    printf("Enter a number: ");
    scanf("%d", &a);
        for (b = 1; b <= a;b++) {
            fact = fact * b;
        }
        printf("Factorial of %d = %d", a, fact);
    

    return 0;
}