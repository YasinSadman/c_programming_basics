#include <stdio.h>

int main() {
    int ara[10]={1,2,4,5};
    int number_to_be_inserted = 3;
    int position_where_insertion = 2;
    int elements_count = 4;

    for(int i = elements_count - 1;i >= position_where_insertion;i--){
        ara[i+1]=ara[i];
    }

    ara[position_where_insertion] = number_to_be_inserted;
    elements_count++;

    for(int m = 0;m < elements_count;m++){
        printf("%d ",ara[m]);
    }
    printf("\n");

    return 0;
}