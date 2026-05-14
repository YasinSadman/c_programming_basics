#include <stdio.h>

int sum(int a,int b);

int main() {

    int a,b;
    
    printf("Enter the first nuumber...:");
    scanf("%d",&a);
    
    printf("Enter the second nuumber...:");
    scanf("%d",&b);
    
    printf("The sum is %d\n",sum(a,b));

    return 0;
}

int sum (int a,int b){
    int sum = a + b;
    return sum;
}
