// CELCIUS TO FAHRENHEIT
#include<stdio.h>

float cel2fah(float cel);

int main(){
    float cel;

    printf("Enter Temp in CELCIUS");
    scanf("%f", &cel); 

    float f = cel2fah(cel);
    printf("Temp in Fahrenheit is: %f \n", f);

    return 0;
}

float cel2fah(float cel){
    float feh = cel * 1.8 + 32;
    return feh;
}


