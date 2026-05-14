#include <stdio.h>

int main() {
    char c;
    printf("Enter the letter..:");
    scanf("%c", &c);

    if (c >= 'a' && c <= 'z') {
        printf("the given letter is lowercase\n");
    } 
    else if (c >= 'A' && c <= 'Z') {
        printf("the given letter is uppercase\n");
    } 
    else {
        printf("not a letter\n");
    }

    return 0;
}
