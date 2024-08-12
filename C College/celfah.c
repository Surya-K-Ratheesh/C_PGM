#include<stdio.h>

// void cel2fah(float cel);
float c2f(float cel); 

int main(){
    float cel;

    printf("Enter Temp in celcius: ");
    scanf("%f", &cel);

    // cel2fah(cel);
    float fah = c2f(cel);
    printf("Temp is Fahrenheit: %f \n", fah);

    return 0;
}

// void cel2fah(float cel){
//     float fah = cel * (9.0/5.0) + 32;
//     printf("Temp in fahrenheit is %f \n", fah);
// }

float c2f(float cel){
    float fah = cel * (9.0/5.0) + 32;
    return fah;
}