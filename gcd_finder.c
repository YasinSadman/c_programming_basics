#include <stdio.h>

int main() {
    int a, b, max, min;
    
    printf("Enter the first number...: ");
    scanf("%d", &a);
    printf("Enter the second number...: ");
    scanf("%d", &b);

    if (a == 0 || b == 0) {
        printf("Cannot find GCD...\n");
        return 0;
    }
    else if (a == b) {
        printf("The GCD is %d\n", a);
        return 0;
    }
    else if (a > b) {
        max = a;
        min = b;
    }
    else {
        max = b;
        min = a;
    }

    for (int i = min; i >= 1; i--) {
        if (max % i == 0 && min % i == 0) {
            if (i == 1) {
                printf("They are co-prime (GCD is 1)\n");
            } else {
                printf("The GCD is: %d\n", i);
            }
            break;
        }
    }
    
    return 0;
}