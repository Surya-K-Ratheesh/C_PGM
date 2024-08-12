#include<stdio.h>

// PERFECT NO.

int main(){
    int n, i, s = 0;

    printf("Enter a no.: ");
    scanf("%d",&n);

    for(i = 1; i < n-1; i++){
        if(n % i == 0){
            s = s + i;
            printf("%d",s);
        }
    }

    if(n == s){
        printf("%d is a perfect no. \n", n);
    }

    else{
        printf("Not a perfect no. \n");
    }

    return 0;
}