#include<stdio.h>
#include<math.h>

// WAP to count the no. of boys whose weight is less than 50 and height is greater than 170.

int main(){
    char name[100];
    int height, weight;
    int count = 0;

    for(int i = 1 ; i <= 4 ; i++){
        printf("Enter Name: ");
        scanf("%s", &name[100]);
        printf("Enter Height: ");
        scanf("%d", &height);
        printf("Enter Weight: ");
        scanf("%d", &weight);
    }

    if (height > 170 && weight < 50){
        count++;
    }


    printf("No of boys: %d \n", count);

    return 0;
}