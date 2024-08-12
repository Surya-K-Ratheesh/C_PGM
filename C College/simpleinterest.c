#include<stdio.h>

int main(){
    float p, r, t, i;

    // Get input from users
    printf("Enter principle amount: ");
    scanf("%f", &p);

    printf("Enter rate of interest: ");
    scanf("%f", &r);

    printf("Enter time period (in years): ");
    scanf("%f", &t);

    // Calculate interest    
    i = (p * r * t)/100;

    // print result
    printf("Simple interest = %f \n", i);

    return 0;
}