#include <stdio.h>

int main() {
    
    double amount;

    printf("Enter the amount ...:");
    scanf("%lf",&amount);

    double paisa = amount*100.00;

    printf("The total paisa is %0.0lf\n",paisa);
    
    return 0;
}
