#include<stdio.h>

int main(){
    int a, b, c;
    printf("Enter 3 no: \n");
    scanf("%d %d %d", &a, &b, &c);

    if (a >= b && a >=c){
        printf("%d is largest \n",a);
    }

    if (b >= c && b >= a){
        printf("%d is largest \n",b);
    }

    if (c >= a && c >= b){
        printf("%d is the largest \n",c);
    }

    return 0;
}