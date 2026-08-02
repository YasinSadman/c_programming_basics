#include <stdio.h>

int main() {
    int ara [10][10]={
        {2,4,6,8,10},
        {1,3,5,7,9}
    };

    for(int i = 0;i < 2;i++){
        for(int m = 0;m < 5;m++){
            printf("%d ",ara[i][m]);
        }
        printf("\n");
    }


    return 0;
}