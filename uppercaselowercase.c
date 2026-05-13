#include <stdio.h>

int main() {
    char c;
    printf("Enter the letter..:");
    scanf("%c", &c);

    if (c >= 'a' && c <= 'z') {
        printf("lowercase\n");
    } 
    else if (c >= 'A' && c <= 'Z') {
        printf("uppercase\n");
    } 
    else {
        printf("not a letter\n");
    }

    return 0;
}
