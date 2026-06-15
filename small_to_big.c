#include <stdio.h>

int main() {
    char country[11]={'b','a','n','g','l','a','\0'};
    printf("%s\n",country);

    for(int i=0;i <7;i++){
        if(country[i] >= 'a' && country[i] <= 'z'){
            country[i] = 'A' + (country[i]-'a');
        }

    }
    printf("%s\n",country);

    return 0;
}