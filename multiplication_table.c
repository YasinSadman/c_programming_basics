#include <stdio.h>

int main() {
    
    int  n,m=9;

    printf("This program prints the m,ultiplication table of n...\n");
    printf("Enter the value of n..\n");

    scanf("%d",&n);

    for(int i = 1;i <= 10;i++){
        printf("%d x %d = %d\n",n,i,m);
        m=m+n;
    }
    
    return 0;
}
