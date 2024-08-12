// Star pattern
// *
// **
// ***
// ****

#include<stdio.h>

int main(){
    int n;
    printf("Enter a value for n \n");
    scanf("%d", &n);

    // To run this loop n times
    for(int i=0; i<n; i++){

        //To print n+1 stars
        for(int j=0; j < i+1; j++){
            printf("*");
        }
        printf("\n");
    }

    return 0;
}