#include <stdio.h>

int main() {
    int matrix[3][3]={
        {1,2,3},
        {4,99,6},
        {7,8,10}
    };

    int required_number = 99;

    for(int i = 0;i < 3;i++){
        for(int j = 0;j < 3;j++){
            if(required_number == matrix[i][j]){
                printf("Found the required number at row %d column %d !!!\n",i,j);
                return 0;
            }
        }
    }

    


    return 0;
}