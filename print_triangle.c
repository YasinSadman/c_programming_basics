#include <stdio.h>

int main() {

    int n;

    printf("Enter the row..:");
    scanf("%d",&n);

    for(int i = 0;i < n;i++){
        for(int m = 1,x=3;m < x;m++){
            printf("*");

        }
    }

    return 0;
}