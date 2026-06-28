#include <stdio.h>

int main() {
    int data[5];

    printf("Store 5 integers in the array...\n");

    for(int i = 0;i < 5;i++){
        scanf("%d",&data[i]);
    }
    printf("Print stored values ...: ");

    for(int i = 0;i < 5;i++){
        printf("%d ",data[i]);
    }
    printf("\n");

    return 0;
}
