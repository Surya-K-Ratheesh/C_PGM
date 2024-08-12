#include<stdio.h>

int main(){
    float a,b,c,d,e,f,g,x;

    printf("Enter 6 nos: ");
    scanf("%f %f %f %f %f %f %f", &a, &b, &c, &d, &e, &f, &g);

    x = ((a - b / c * d + e) * (f + g));

    printf("Solution of the expression is %f", x);

    return 0;
}