#include<stdio.h>

int main(){
    int n;
    float a[100], sum = 0, avg;

    printf("Enter a no.: ");
    scanf("%d",&n);

    printf("Enter numbers: \n");
    for(int i = 0; i < n; i++){
        printf("a[%d] = ",i);
        scanf("%f", &a[i]);
    }

    for(int i = 0; i < n; i++){
        sum = sum + a[i];
    }

    avg = sum/n;

    printf("Sum is %f \n",sum);
    printf("Average is %f \n",avg);

    return 0; 
}