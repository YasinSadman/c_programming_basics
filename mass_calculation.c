#include <stdio.h>

int main() {
    
    double P,V,T,m;

    printf("Enter the amount of Pressure...:");
    scanf("%lf",&P);
    printf("Enter the amount of Volume...:");
    scanf("%lf",&V);
    printf("Enter the amount of Temperature...:");
    scanf("%lf",&T);

    m =((P*V)/(0.37*(T+460)));
    printf("The mass is....:%0.3lf",m);
    
    
    return 0;
}
