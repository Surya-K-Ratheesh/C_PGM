#include<stdio.h>

int main(){
    int i, n, t, r, sum = 0;

    printf("Enter a no.: ");
    scanf("%d",&n);

    t = n;

    while(t > 0){
        r = t%10;
        sum = sum + (r*r*r);
        t = t/10;
    }

    if (n == sum){
        printf("%d is an Armstrong no. \n",n);
    }

    else{
        printf("%d is not an Armstrong no. \n",n);
    }

    return 0;
}