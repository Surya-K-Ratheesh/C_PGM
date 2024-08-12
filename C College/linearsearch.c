#include<stdio.h>

// LINEAR SEARCH

int main(){
    int n, i, j, array[50],flag = 0;

    printf("Enter the size of the array: ");
    scanf("%d",&n);

    printf("Enter the values \n");
    for(i = 0; i < n; i++){
        scanf("%d",&array[i]);
    }

    printf("Enter the no to be searched: ");
    scanf("%d",&j);

    for(i = 0; i < n; i++){
        if(array[i] == j){
            flag = 1;
            break;
        }
    }

    if(flag == 1){
        printf("%d is found at the position %d \n",j, i+1);
    }

    else{
        printf("No is not found \n");
    }

    return 0;
}