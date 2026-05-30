#include <stdio.h>

int find_max(int ara[],int n);

int main() {
    int ara[]={85,61,79,50,88,92,64,73,81,55,70,94,83,67,76,48,89,59,91,62,78,86,53,95,72,60,84,42,87,69,99,57,75,82,66,90,71,80,51,83};
    int n=40;

    int max =find_max(ara,n);
    printf("%d\n",max);


    return 0;
}
 int find_max(int ara[],int n){
    int max = ara[0];
    
    for(int i=0;i<n;i++){
        if(ara[i] > max){
            max =ara[i];
        }
    }
    return max;
 }
