#include<stdio.h>

int main(){
    int n, s, r, i, count = 0;

    for(i = 100; i <= 1000; i++){
        n = i, s = 0;

        while (n > 0){
            r = n % 10;
            s = s + r*r*r;
            n = n/10; 
        }

        if(s == i){
            count = count + 1;
            printf("%d \n", i);
        }
    }

    printf("No. of armstrong no. b/w 100 and 1000 is %d \n", count);

    return 0;
}