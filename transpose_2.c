#include <stdio.h>

int main() {
    int matrix[2][2]={
        {1,2},
        {3,4}
    };

    int transpose[2][2];

    for(int i = 0;i < 2;i++){
        for(int m = 0;m < 2;m++){
            transpose[m][i]=matrix[i][m];
        }
    }

    for(int i = 0;i < 2;i++){
        for(int m = 0;m < 2;m++){
            printf("%d ",transpose[i][m]);
        }
        printf("\n");
    }

    return 0;
}