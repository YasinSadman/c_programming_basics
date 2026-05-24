#include <stdio.h>

void phw(int n);

int main() {
    
    phw(5);
    
    return 0;
}

void phw(int n){

    if (n == 0){
        return;
    }

    printf("Hello, World!\n");
    phw(n-1);

}
