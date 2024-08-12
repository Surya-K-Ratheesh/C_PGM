#include<stdio.h>

void sum(int *a, int *b);

int main(){
    int a, b;

    printf("Enter 1st no: ");
    scanf("%d",&a);

    printf("Enter 2nd no: ");
    scanf("%d",&b);

    sum(&a, &b);
    

    return 0;
}

void sum(int *a, int *b){
    int sum;

    sum = *a + *b;
    printf("Sum = %d \n",sum);
}