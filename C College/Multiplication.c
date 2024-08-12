// MULTIPLICATION TABLE
#include<stdio.h>
 
int main(){
    int n;

    printf("Enter a no: ");
    scanf("%d", &n);

    printf("Multiplication table of %d is\n", n);

    for (int i=1; i<=10; i++){
        printf("%d \n", n * i);
    }

    return 0;
}