#include <stdio.h>

int main() {
    int matrix[3][3]={
        {1,2,3},
        {4,5,6},
        {7,8,9}
    };

    int sum_of_row ;

    for(int i = 0;i < 3;i++){

        sum_of_row = 0;

        for(int j = 0;j < 3;j++){
            sum_of_row = sum_of_row + matrix[i][j];
        }

        printf("Sum of Row %d is %d\n",i+1,sum_of_row);

    }


    return 0;
}