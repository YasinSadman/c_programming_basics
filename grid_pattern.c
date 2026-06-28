#include <stdio.h>

int main() {
    int a, b;

    printf("Enter the number of rows: ");
    scanf("%d", &a);
    
    printf("Enter the number of columns: ");
    scanf("%d", &b);
    
    printf("\n--- Generating Pattern ---\n\n");

    for (int i = 1; i <= a; i++) {
        for (int m = 1; m <= b; m++) {
            if (i % 2 == 1 || m == (1 + b) / 2) {
                printf("$");
            } 
            else {
                printf("*");
            }
        }
        printf("\n");
    }

    return 0;
}