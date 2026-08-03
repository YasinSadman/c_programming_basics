#include <stdio.h>

void treat (int *time,int *number);

int main() {

    int time,number;

    treat(&time,&number);

    printf("%d %d\n",time,number);
    
    return 0;
}

void treat(int *time,int *number){
    *time = 5;
    *number = 9;
}