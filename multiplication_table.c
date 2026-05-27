#include <stdio.h>

int main() {
    
    int  n,m = 0;

    printf("This program prints the multiplication table of n...\n");
    printf("Enter the value of n...:");

    scanf("%d",&n);

    for(int i = 1;i <= 10;i++){
        m = m + n;
        printf("%d x %d = %d\n",n,i,m);
    }
    
    return 0;
}
