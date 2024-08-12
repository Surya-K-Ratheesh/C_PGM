#include<stdio.h>

int main(){
    int n, i, r, sum , count = 0;

    for(i = 100; i <= 1000; i++){
        n = i;
        sum = 0;

        while(n > 0){
            r = n % 10;
            sum = sum + (r*r*r);
            n = n / 10;
        }

        if (sum == i){
            count = count + 1;
            printf("%d \n",i);
        }
    }

    printf("Armstrong no. b/w 100 & 1000 is %d \n",count);

    return 0;
}