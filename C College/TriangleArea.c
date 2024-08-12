#include<stdio.h>
#include<math.h>

int main(){
    float a, b, c, s, area;

    printf("Enter 3 sides of a traingle");
    scanf("%f %f %f", &a, &b, &c);
    
    s = (a+b+c)/2;

    area = sqrt(s*(s-a)*(s-b)*(s-c));

    printf("Area of triangle = %f \n", area);

    return 0;
}