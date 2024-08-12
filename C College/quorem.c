#include<stdio.h>

int main(){
    int div, divi, quo, rem;

    printf("Enter Divident: ");
    scanf("%d",&div);

    printf("Enter Divisor: ");
    scanf("%d", &divi);

    quo = div / divi;

    rem = div % divi;

    printf("Quotient = %d \n", quo);
    printf("Remainder = %d \n",rem);

    return 0;
}