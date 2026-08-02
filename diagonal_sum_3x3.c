#include <stdio.h>

int main() {
    int matrix[3][3]={
        {1,2,3},
        {4,5,6},
        {7,8,9}
    };

    int sum_of_diagonal = 0;

    for(int i = 0;i < 3;i++){
        sum_of_diagonal = sum_of_diagonal + matrix[i][i];
    }

    printf("The sum of diagonal is %d\n",sum_of_diagonal);



    return 0;
}