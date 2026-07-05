#include <stdio.h>

int main() {

    char ara1[1000];

    for(int b = 1;b > 0;b++){
        scanf("%s",&ara1[b]);
        if(ara1[b] == '.'){
            break;
        }
    }

    return 0;
}