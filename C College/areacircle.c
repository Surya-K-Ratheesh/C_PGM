#include<stdio.h>

float arcircle(float rad);

int main(){
    float rad;

    printf("Enter radius: ");
    scanf("%f", &rad);

    float f = arcircle(rad);
    printf("%f", f);
    printf("\n");

    return 0;
}

float arcircle(float rad){
    float radius = 3.14*rad*rad;
    return radius;
}