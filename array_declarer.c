#include <stdio.h>

int main() {
    int n,a;
    
    printf("Enter the number of entries you want to create an array of...: ");
    scanf("%d",&n);

    int ara[n];

    for(int i = 0;i < n;i++){
        printf("Enter the number for the index %d ...: ",i);
        scanf("%d",&a);
        ara[i]=a;
    }
    printf("Please check if your array is correct..\n");
    for(int i = 0;i < n;i++){
        printf("At index %d => %d\n",i,ara[i]);
        
    }

    return 0;
}