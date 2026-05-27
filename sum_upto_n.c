#include <stdio.h>

int main() {
    int n,m=1,x=0;
    
    printf("This program prints the sum upto n...\n");
    printf("Enter the value of n...: ");
    scanf("%d",&n);
    

    for(int i = 1;i <= n;i++,m++){
        x=m+x;
    }

    printf("The sum is %d\n",x);
    
    return 0;
}
