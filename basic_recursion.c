#include <stdio.h>

void meow(int n);

int main() {

    meow(3);
    
    return 0;
}

void meow(int n){
    if(n == 0){
        printf("Everything finished :( \n");

        return;
    }
    else{
        printf("Left %d treats\n",n);

        meow(n - 1);
    }
}