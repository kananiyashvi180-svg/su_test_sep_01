#include <stdio.h>

int main() {
    int num, original, num2, sum = 0;

    
    printf("Enter a number: ");
    scanf("%d", &num);

    original = num; 

    
    while (num != 0) {
        num2 = num % 10;           
        sum += num2*num2*num2;
        num = num / 10;                 
    }
    if (sum == original)
        printf("%d is an Armstrong number.\n", original);
    else
        printf("%d is not an Armstrong number.\n", original);

    return 0;
}
