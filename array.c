#include <stdio.h>

int main() {
    int n;

    printf("Enter the number of students..: ");
    scanf("%d",&n);

    float ara1[n],ara2[n],ara3[n];

    printf("Enter their marks serial wise for first term...: ");

    for(int b = 0;b < n;b++){
        scanf("%f",&ara1[b]);
    }

    printf("Enter their marks serial wise for 2nd term...: ");

    for(int a = 0;a < n;a++){
        scanf("%f",&ara2[a]);
    }

    printf("Enter their marks serial wise for third term...: ");

    for(int m = 0;m < n;m++){
        scanf("%f",&ara3[m]);
    }

    for(int i = 0;i < n;i++){
        printf("Student in position %d got %0.2f marks\n",i+1,ara1[i]/4.0 + ara2[i]/4.0 + ara3[i]/2.0);
    }

    return 0;
}