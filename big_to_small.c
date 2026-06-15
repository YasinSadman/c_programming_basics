#include <stdio.h>

int main() {
    char country[11]={'B','A','N','G','L','A','\0'};
    printf("%s\n",country);

    for(int i=0;i <7;i++){
        if(country[i] >= 'A' && country[i] <= 'Z'){
            country[i]='a'+(country[i]-'A');
        }

    }
    printf("%s\n",country);

    return 0;
}