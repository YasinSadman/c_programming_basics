#include <stdio.h>

int main() {
    int ara[10]={15, 3, 9, 1, 12, 6, 20, 4, 8, 2};
    int elements = 10;
    int box;

    for(int k = 0;k < elements-1 ;k++){
        for(int i = 0;i < elements-1-k;i++){
            if(ara[i] > ara[i+1]){
                box = ara[i];
                ara[i] = ara[i+1];
                ara[i+1] = box;
            }
        }
    }
    for(int m = 0;m < elements;m++){
        printf("%d ",ara[m]);
    }
    printf("\n");

    return 0;
}