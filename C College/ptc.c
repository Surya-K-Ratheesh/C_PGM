#include<stdio.h>

// void swap(int a, int b);

void swap(int *a, int *b);

int main(){
    int a = 100, b = 50;


    // swap(a , b);

    swap(&a, &b);

    printf("Value of a = %d \n",a);
    printf("Value of b = %d \n",b);


    return 0;

}

void swap(int *a,int *b){
    int t;
    t = *a;
    *a = *b;
    *b = t;

    printf("Value of a = %d \n",*a);
    printf("Value of b = %d \n",*b);
    

}

// void swap(int a, int b){
//     int t;
//     t = a;
//     a = b;
//     b = t;

//     printf("Value of a = %d \n",a);
//     printf("Value of b = %d \n",b);
// }