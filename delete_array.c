#include <stdio.h>

int main() {
    int ara[10]={1,2,3,7,4,5,6};
    int number_to_be_deleted = 7;
    int position_where_deletion = 3;
    int elements_count = 7; 

    for(int i = position_where_deletion;i < elements_count-1;i++){
        ara[i]=ara[i+1];
    }
    //printf("%d\n",ara[3]);

    //ara[position_where_deletion] = number_to_be_deleted;
    elements_count--;

    for(int m = 0;m < elements_count;m++){
        printf("%d ",ara[m]);
    }
    printf("\n");




    return 0;
}