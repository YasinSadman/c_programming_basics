#include <stdio.h>

int main() {
    int cat_weights[15] = {12, 15, 18, 21, 25, 28, 30, 33, 37, 40, 42, 45, 50, 53, 60};
    int size = 15;

    int required_num = 25;

    int beg = 0,end = 14;
    int mid;

    while (beg <= end){
        mid = (beg + end)/2;

        if (required_num == cat_weights[mid]){
            printf("Found at index %d\n", mid);
            return 0;
        }
        else if(required_num > cat_weights[mid]){
            beg = mid + 1;
        }
        else if(required_num < cat_weights[mid]){
            end = mid - 1;
        }
    }


    return 0;
}