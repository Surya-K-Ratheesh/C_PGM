// FAHRENHEIT TO CELCIUS
#include<stdio.h>

// float fah2cel(float fah);

int main(){
    float fah;

    printf("Enter temp in Fahrenheit: ");
    scanf("%f", &fah);

    // float c = fah2cel(fah);

    float c = (fah - 32) * (5.0/9.0);
    printf("Temp in CELCIUS is %f \n", c);

    return 0;
}

// float fah2cel(float fah){
//     float cel = (fah - 32) * (5.0/9.0);
//     return cel;
// }