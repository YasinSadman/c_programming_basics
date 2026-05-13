#include <stdio.h>

int main() {
    
    char c;
    double a,b;

    printf("Enter + to perform addition\nEnter - to perform subtraction \nEnter * to perform multiplication\nEnter / to perform divition \n");
    printf("Enter the symbol..:");
    scanf("%c",&c);
    printf("Enter the first number...:");
    scanf("%lf",&a);
    printf("Enter the second number...:");
    scanf("%lf",&b);
    if (b != 0){
        if (c == '+'){
        printf("The sum is %0.3lf",a+b);
    }
        else if (c == '-'){
        printf("The difference is %0.3lf",a-b);
    }
        else if (c == '*'){
        printf("The product is %0.3lf",a*b);
    }
        else if (c == '/'){
        printf("The quotient is %0.3lf\n",a/b);
    }
    }
    else{
        printf("Sorry invalid input");
    }

    return 0;
}
