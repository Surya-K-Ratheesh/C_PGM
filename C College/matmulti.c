#include<stdio.h>
#include<math.h>

int main(){
    int a[10][10], b[10][10], c[10][10], i, j, k, m, n, o, p;
    
    printf("Enter the size of A matrix: ");
    scanf("%d%d", &m, &n);

    printf("Enter the size of B matrix: ");
    scanf("%d %d", &o, &p);

    if (n == o){
        printf("Enter the elements of A matrix \n");
        for (i = 0; i < m; i++){
            for(j = 0; j < n; j++){
                scanf("%d",&a[i][j]);  
            }  
        }

        printf("Enter the elements of b matrix \n");
        for (i = 0; i < o; i++){
            for(j = 0; j < p; j++){
                scanf("%d",&b[i][j]);
            }  
        }

        for(i = 0; i < m; i++){
            for(j = 0; j < p; j++){
                c[i][j] = 0;

                for(k = 0; k < n; k++){
                    c[i][j] = c[i][j]+ (a[i][k] * b[k][j]);
                }
            }
        }    
    
        printf("\n A matrix is: \n\n");

        for(i = 0; i < m; i++){
            for(j = 0; j < n; j++){
                printf("%4d",a[i][j]);
                printf("\t");
            }
            printf("\n");
        }

        printf("\n B matrix is: \n\n");

        for(i = 0; i < o; i++){
            for(j = 0; j < p; j++){
                printf("%4d",b[i][j]);
                printf("\t");
            }
            printf("\n");
        }

        printf("\n C matrix is: \n\n");

        for(i = 0; i < m; i++){
            for(j = 0; j < p; j++){
                printf("%4d",c[i][j]);
                printf("\t");
            }
            printf("\n");
        }
    }
       
    else{
        printf("Multiplication not possible \n Please Re-enter correct size \n");
    }

    return 0;
}