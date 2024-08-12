#include<stdio.h>
#include<stdlib.h>

int main(){
    int a, r;

    printf("Enter the Radius of the Circle :");
    scanf("%d",&r);

    a = 3.14*r*r;

    printf("Area of the Circle :%d \n",a);

    return 0;
}