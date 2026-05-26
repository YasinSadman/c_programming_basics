#include <stdio.h>

int main() {
    
    float dividend,divisor;


    printf("Enter the integer you want to divide...:");
    scanf("%f",&dividend);
    printf("Enter the integer you want to divide with...:");
    scanf("%f",&divisor);
    
    if(divisor > 0 ){
        float remainder;
        remainder = dividend -(((int)(dividend/divisor)))*(divisor);
        printf("Remainder is %0.0f\n",remainder);

    }
    else{
        printf("Invalid input\n");
    }

    return 0;
}
