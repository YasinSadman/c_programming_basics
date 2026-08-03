#include <stdio.h>

int print(void);

int main() {


    printf("The value is %d\n",print());
    
    return 0;
}

int print(void){
    int value = 1523;

    return value;
}