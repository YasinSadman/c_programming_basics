#include <stdio.h>

double modulus(double n);

int main() {
    
    double x1,x2,x3,y1,y2,y3;

    printf("Enter the value of x1...:");
    scanf("%lf",&x1);
    printf("Enter the value of y1...:");
    scanf("%lf",&y1);
    printf("Enter the value of x2...:");
    scanf("%lf",&x2);
    printf("Enter the value of y2...:");
    scanf("%lf",&y2);
    printf("Enter the value of x3...:");
    scanf("%lf",&x3);
    printf("Enter the value of y3...:");
    scanf("%lf",&y3);

    double area;
    area = (x1*(y2-y3)+x2*(y3-y1)+x3*(y1-y2));

    printf("Area is %lf\n", modulus(area*0.5));

    return 0;
}

double modulus(double n){
    if(n < 0){
        return n * -1;
    }
    else {
        return n;
    }
}
