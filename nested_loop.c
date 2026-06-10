#include <stdio.h>

int main() {
    
    char a;
    int n;

    printf("Enter how many times and how many columns...:");
    scanf("%d",&n);
    printf("Enter the  character...:");
    scanf(" %c",&a);

    for(int i =0;i<n;i++){
        for(int m=0;m<n;m++){
            printf("%c",a);
        }
        printf("\n");
    }

    return 0;
}