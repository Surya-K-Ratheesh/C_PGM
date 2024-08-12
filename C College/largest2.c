// WAP to select and print the largest among 2 numbers.
#include<stdio.h>

int main(){
    int a,b;

    printf("Enter 1st no: ");
    scanf("%d", &a);

    printf("Enter 2nd no: ");
    scanf("%d", &b);

    if (a>b){
        printf("%d is greater than %d \n",a,b);
    }

    else if (a<b){
        printf("%d is greater than %d \n",b,a);
    }

    else{
        printf("They are equal \n");
    }

    return 0;
}