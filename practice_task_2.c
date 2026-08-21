#include <stdio.h>

int main() {

    printf("Question : Try to find the sum of all numbers between 100 and 200 that can be divided by 17.");

    int box = 0;

    for(int i = 100;i <= 200;i++){
        if(i % 17 == 0){
            box = box + i;
        }
    }

    printf("\n%d\n",box);


    



    return 0;
}