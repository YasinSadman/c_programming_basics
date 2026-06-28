#include <stdio.h>

int main() {
    float n, sum;

    printf("Enter an integer : ");
    scanf("%f", &n);

    printf("This program prints the sum of squares of even numbers upto %0.0f\n", n);

    sum = (2.0 / 3.0) * n * (n + 1) * ((2 * n) + 1);

    printf("%0.0f\n", sum);

    return 0;
}