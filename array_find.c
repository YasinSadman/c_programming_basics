#include <stdio.h>

int main() {
    int arra[10]={2,6,8,9,4,6,7,6,4,7};

    int n;

    printf("Enter the number you want to find..:");
    scanf("%d",&n);

    for(int i = 0;i < 10;i++){
        if(arra[i] == n){
            printf("Found at position %d\n",i+1);
        }
        else{
            printf("Not Found...\n");
        }
    }


    return 0;
}