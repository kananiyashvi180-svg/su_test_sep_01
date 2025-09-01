#include <stdio.h>

int main() {
    char chr;
    printf("Enter a character: ");
    scanf("%c", &chr);
    if ((chr>= 'A' && chr <= 'Z') || (chr >= 'a' && chr<= 'z')) {
        printf("'%c' is an Alphabet.\n", chr);
    }
    else if (chr>= '0' && chr <= '9') {
        printf("'%c' is a Digit.\n", chr);
    }
    else {
        printf("'%c' is a Special Symbol.\n", chr);
    }

    return 0;
}