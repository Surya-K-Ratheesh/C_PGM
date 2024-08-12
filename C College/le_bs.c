#include<stdio.h>

int main(){
    int n, i, j, arr[50], temp;

    printf("Enter the size of array: ");
    scanf("%d",&n);

    printf("Enter the values: \n");
    for(i = 0; i < n; i++){
        scanf("%d",&arr[i]);
    }

    for(i = 0; i < n - 1; i++){
        for(j = 0; j < n-i-1;j++){
            if(arr[j] > arr[j+1]){
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }

    printf("The Sorted Array is: \n");
    for(i = 0; i < n; i++){
        printf("%d \n",arr[i]);
    }

    return 0;
}