#include<stdio.h>

int main(){
    int n, i, j, array[50], temp;

    printf("Enter the size of the array: ");
    scanf("%d", &n);

    printf("Enter the values: ");
    for(i = 0; i < n; i++){
        scanf("%d",&array[i]);
    }

    for(i = 0; i < n-1; i++){
        for(j = 0; j < n-i-1; j++){
            if(array[j] > array[j+1]){
                temp = array[j];
                array[j] = array[j+1];
                array[j+1] = temp;
            }
        }
    }

    printf("The sorted array is: \n");
    for( i = 0; i < n; i++){
        printf("%d \n", array[i]);
    }

    return 0;
}