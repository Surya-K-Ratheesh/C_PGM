#include<stdio.h>

int main(){
    int m,flag=0;
    printf("Enter a no: ");
    scanf("%d",&m);

    // int x = (m/2);
    for(int i = 2; i <= m/2; i++){
        if(m % i == 0){
            flag=1;
            break;
            
        }

        //else
        //{flag=0;}
    }
    if(flag==1){
            printf("not Prime no \n");
        }
        else 
    {printf("Prime no \n");}

    return 0;
}