#include<stdio.h>
#include<math.h>

int main(){
    float p, r, t, i, a;

    printf("Enter principle amount: ");
    scanf("%f", &p);

    printf("Enter interest rate: ");
    scanf("%f", &r);

    printf("Enter time (in years): ");
    scanf("%f", &t);

    i = (p * pow((1 + r/100), t)) - p;
    a = p + i;

    printf("Compound interest = %f \n", i);
    printf("Amount = %f \n", a);

    return 0;
}