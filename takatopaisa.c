#include <stdio.h>

int main() {
    
    double amount;

    printf("Enter the amount ...:");
    scanf("%lf",&amount);

    printf("The total paisa is %0.0lf\n",amount*100);
    
    return 0;
}
