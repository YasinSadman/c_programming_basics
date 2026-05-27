#include <stdio.h>

int main() {
    int n;


    printf("This program prints all the multiplication table from 1 upto n.\n");
    printf("Enter the number you want to print upto...: ");
    scanf("%d",&n);

    for(int i = 1;i <= n;i++){
         printf("Multiplication Table of %d ...:\n\n",i);
        for(int m = 1;m <= 10;m++){
            printf("%d x %d = %d\n",i,m,i*m);
        }
        printf("\n");
    }
    
    return 0;
}
