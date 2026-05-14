#include <stdio.h>

float modulus (float a);

int main () {
    
    float x,x1,x2,x3,y,y1,y2,y3,area1,area2,area3,total_area;

    printf("This program takes the value of a random point as (x,y) and finds its position relative to the triangle..\n");
    printf("Enter the vertices as x1,y1,x2,y2,x3 and y3 respectively\n");

    printf("Enter the the value of x1...:");
    scanf("%f",&x1);
    printf("Enter the the value of y1...:");
    scanf("%f",&y1);
    printf("Enter the the value of x2...:");
    scanf("%f",&x2);
    printf("Enter the the value of y2...:");
    scanf("%f",&y2);
    printf("Enter the the value of x3...:");
    scanf("%f",&x3);
    printf("Enter the the value of y3...:");
    scanf("%f",&y3);
    printf("Enter the the value of x...:");
    scanf("%f",&x);
    printf("Enter the the value of y...:");
    scanf("%f",&y);

    total_area = modulus(0.5*((x1*y2+x2*y3+x3*y1)-(x2*y1+x3*y2+x1*y3)));
    area1 = modulus(0.5*((x1*y3+x3*y+x*y1)-(x3*y1+x*y3+x1*y)));
    area2 = modulus(0.5*((x*y2+x2*y3+x3*y)-(x2*y+x3*y2+x*y3)));
    area3 = modulus(0.5*((x*y1+x1*y2+x2*y)-(x1*y+x2*y1+x*y2)));

    float sum = area1 + area2 + area3;

    if ((area1 == 0.0f || area2 == 0.0f || area3 == 0.0f) && (modulus(sum - total_area) < 0.0001f)){
        printf("The given point falls on the triangle...\n");
    }
    else{
        if( modulus(sum - total_area) < 0.0001f){
            printf("The given point (%f,%f) is inside..\n",x,y);
        }
        else{
            printf("The given point (%f,%f) is outside..\n",x,y);
        }
    }
    
    return 0;
}

float modulus (float a){
    if (a < 0){
        return a*-1;
    }
    else{
        return a;
    }
}
