#include<stdio.h>

int main(){
    int a, b, c;
    printf("Enter 3 no: \n");
    scanf("%d %d %d", &a, &b, &c);

    if (a >= b && a >=c){
        printf("%d is the largest \n");
    }

    else if(b >= a && b >= c){
        printf("%d is the largest \n");
    }

    else{
        printf("%d is the largest \n", c);
    }

    return 0;
}