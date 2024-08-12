#include<stdio.h>

void swap(int *a, int *b, int *c);

int main(){
    int a, b, c;
    printf("Enter the value for A: ");
    scanf("%d",&a);

    printf("Enter the value for B: ");
    scanf("%d",&b);

    printf("\n BEFORE SWAPPING \n");
    printf("Value of A = %d \n", a);
    printf("Value of B = %d \n", b);

    printf("\n AFTER SWAPPING \n");

    swap(&a, &b, &c);

    printf("Value of A = %d \n", a);
    printf("Value of B = %d \n", b);

    return 0;
}

void swap(int *a, int *b, int *c){
    *c = *a;
    *a = *b;
    *b = *c;
}
