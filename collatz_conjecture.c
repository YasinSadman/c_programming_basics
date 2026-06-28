#include <stdio.h>

int main() {

    int n;
    scanf("%d",&n);

    printf("%d ",n);

    for(int i = 0;i >= 0;i++){
        if(n == 1){
            break;
        }
        else if(n % 2 == 1){
            n = 3*n+1;
            printf("%d ",n);

        }
        else if(n % 2 == 0){
            n = n/2;
            printf("%d ",n);
        }
    }

    printf("\n");

    return 0;
}