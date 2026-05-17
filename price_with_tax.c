#include <stdio.h>

double total_price(double a,double b,double c);

int main() {
    double a,b,c;
    
    printf("Enter the total price ...:");
    scanf("%lf",&a);
    printf("Enter the tax percantage ...:");
    scanf("%lf",&b);
    printf("Enter the discount percentage ...:");
    scanf("%lf",&c);

    printf("Total payable amount ..: %0.2lf\n",total_price(a,b,c));
    
    
    return 0;
}

double total_price (double a, double b,double c){

    return ((a-(a*(c/100)))+(a-(a*(c/100)))*(b/100));
}