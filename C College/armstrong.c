#include<stdio.h>

int main(){
    int n, t, sum = 0, r;

    printf("Enter a no: ");
    scanf("%d", &n);

    t = n;

    while(t>0){
        r=t%10;
        sum = sum+(r*r*r);
        t=t/10;
    }

    if (n == sum){
        printf("%d is an Armstrong no \n",n);
    }

    else{
        printf("Not an Armstrong no. \n");
    }

    return 0;
}

// 0, 1, 153, 370, 371, 407