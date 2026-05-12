#include <stdio.h>

int main() {
    char c;
    printf("Enter the letter..:");
    scanf("%c",&c);
    if(c >= 'a' && c <= 'z'){
        printf("lowercase\n"); 
    }
    else{
        printf("uppercase\n"); 
    }
    
    return 0;
}