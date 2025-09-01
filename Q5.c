#include <stdio.h>

int main() {
    int num, original,num2 = 0, remainder;

    
    printf("Enter a number: ");
    scanf("%d", &num);

    original = num; 
    while (num != 0) {
        remainder = num % 10;
        num2 = num2 * 10 ;
        num = num / 10;
    }
    if (original == num2)
        printf("%d is a palindrome.\n", original);
    else
        printf("%d is not a palindrome.\n", original);

    return 0;
}