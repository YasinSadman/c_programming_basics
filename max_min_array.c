#include <stdio.h>

int main() {
    int ara[40] = {
        88, 12, 95, 43, 67, 3, 51, 29, 74, 18,
        91, 36, 5, 82, 60, 47, 99, 14, 23, 70,
        31, 8, 64, 55, 2, 79, 10, 45, 93, 26,
        38, 85, 17, 62, 49, 1, 77, 53, 34, 68
    };
    int elements_count = 40;

    int max = ara[0] , min = ara[0];

    for(int i =0 ; i < elements_count;i++){
        if(ara[i] >= max){
            max = ara[i];
        }
        if(ara[i] <= min) {
            min = ara[i];
        }
    }

    printf("Max = %d\nMin = %d\n",max,min);



    return 0;
}