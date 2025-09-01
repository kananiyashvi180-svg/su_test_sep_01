#include <stdio.h>

int main() {
    int num;
    int sum = 0;
    int count = 0;

    printf("Enter numbers :\n");

    do {
        scanf("%d", &num);

        if (num != 0) {  
            sum += num;
            count++;
        }
    } while (num != 0);

    if (count > 0) {
        float average = (float)sum / count;
        printf("Sum = %d\n", sum);
        printf("Average = %.2f\n", average);
    } else {
        printf("No numbers were entered.\n");
    }

    return 0;
}

