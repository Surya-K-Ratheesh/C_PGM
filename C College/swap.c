#include<stdio.h>

void swap(int *a, int *b, int *c);

int main(){
    int a, b ,c;
    printf("Enter a value: ");
    scanf("%d", &a);

    printf("Enter 2nd value: ");
    scanf("%d", &b);

    printf("Value of a = %d \n",a);
    printf("Value of b = %d \n",b);

    swap(&a, &b, &c);

    printf("\n");

    printf("Swapped value of a = %d \n", a);
    printf("Swapped value of b = %d \n", b);
    
    return 0;
}

void swap(int *a, int *b, int *c){
    *c = *a;
    *a = *b;
    *b = *c;
}