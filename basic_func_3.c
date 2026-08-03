#include <stdio.h>

int maintenance(int n);

int main() {

    printf("The total cost is %d\n",maintenance(5));
    
    return 0;
}

int maintenance(int n){
    int cost = n * 5000;

    return cost;
}