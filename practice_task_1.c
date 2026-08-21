#include <stdio.h>

int main() {
    
    printf("The question is we have to print the sum of the series 1+3+5+...+n\nIt can be seen this is an odd series.\n");
    printf("Enter a number :");

    int num,m=1;

    scanf("%d",&num);

    for(int i = 1,n=3;i <= num;i=i+2,n=n+2){
        m = m + n;
    }

    printf("%d\n",m);



    return 0;
}