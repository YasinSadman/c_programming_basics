#include <stdio.h>

int main() {
    int num,m=1;
    printf("Enter a number :");
    scanf("%d",&num);

    for (int i = 1;i <= num;i++){

        m = m * i;
    }

    printf("%d\n",m);


    return 0;
}