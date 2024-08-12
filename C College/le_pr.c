#include<stdio.h>

int main(){
    int i, m, flag = 0;

    printf("Enter a No.: ");
    scanf("%d",&m);

    for(i = 2; i < m; i++){
        if(m % i == 0){
            flag = 1;
            break;
        }
    }

    if (flag == 1){
        printf("%d is not a prime no. \n",m);
    }

    else{
        printf("%d is a prime no \n",m);
    }

    return 0;
}