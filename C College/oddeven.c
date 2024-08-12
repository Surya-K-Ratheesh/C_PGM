#include<stdio.h>

int main(){
    int n;

    printf("Enter a no: ");
    scanf("%d", &n);

    if (n%2 == 0){
        printf("No. is even \n");
    }

    else{
        printf("No. is odd \n");
    }

    return 0;
}