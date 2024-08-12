// WAP to select and print the largest among 3 numbers.
#include<stdio.h>

int main(){
    int a,b,c;

    printf("Enter 1st no: ");
    scanf("%d",&a);

    printf("Enter 2nd no: ");
    scanf("%d",&b);

    printf("Enter 3rd no: ");
    scanf("%d",&c);

    if (a>b){
        if (a>c){
            printf("Largest = %d \n", a);
        }

        else{
            printf("Largest = %d \n", c);
        }
    }

    else if(b>c){
        printf("Largest = %d \n", b);
    }

    else{
        printf("Largest = %d \n", c);
    }

    return 0;
}