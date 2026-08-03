#include <stdio.h>

void treats(int n);

int main() {
    
    treats(5);

    return 0;
}

void treats(int n){
    printf("Cats ate %d treats :)\n",n);
}