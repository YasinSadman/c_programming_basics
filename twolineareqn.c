#include <stdio.h>

int main() {
    
    double a1,a2,b1,b2,c1,c2,D;

    printf("Enter the value of a1...:");
    scanf("%lf",&a1);
    printf("Enter the value of b1...:");
    scanf("%lf",&b1);
    printf("Enter the value of c1...:");
    scanf("%lf",&c1);
    printf("Enter the value of a2...:");
    scanf("%lf",&a2);
    printf("Enter the value of b2...:");
    scanf("%lf",&b2);
    printf("Enter the value of c2...:");
    scanf("%lf",&c2);
    D = ((a1*b2)-(a2*b1));
    
if(D == 0.00){
    printf("No unique solution exists");
}
else {
    printf("The required value of x is : %0.3lf\n",((c1*b2)-(c2*b1))/D);
    printf("The required value of y is : %0.3lf\n",((a1*c2)-(a2*c1))/D);
}
    

    
    return 0;
}
