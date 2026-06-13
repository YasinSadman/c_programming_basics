#include <stdio.h>

int main() {
    for(int i=0;i<5;i++){
        for(int m=0;m<5;m++){
            if(i == m){
                printf("$");
            }
            else{
                printf("*");
            }
        }
        printf("\n");
    }

    return 0;
}