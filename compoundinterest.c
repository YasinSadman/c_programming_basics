#include <stdio.h>
#include <math.h>


int main() {
    
    double P,r,n,t;

    printf("Enter the Principal amount...:");
    scanf("%lf",&P);
    printf("Enter the Annual Interest Rate...:");
    scanf("%lf",&r);
    printf("Enter the number of times interest is compounded per year...:");
    scanf("%lf",&n);
    printf("Enter the number of years...:");
    scanf("%lf",&t);
    printf("So the total accumuluted money is %0.4lf\n",P*(pow((1+(r/n)),n*t)));
    
    return 0;
}
