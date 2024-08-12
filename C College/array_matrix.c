#include<stdio.h>

int main(){
    int mata[3][3], matb[3][3];

    printf("Enter value for Matrix A (3X3): ");

    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            scanf("%d", &mata[i][j]);
        }
    }

    printf("Enter value of Matrix B (3X3): ");

    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            scanf("%d", &matb[i][j]);
        }
    }

    int sum[2][2];

    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            sum[i][j] = mata[i][j] + matb[i][j];
        }
    }
 
    printf("\n");

    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            printf("%d", sum[i][j]);
            printf("\t");
        }
        printf("\n");
    }

    return 0;
}