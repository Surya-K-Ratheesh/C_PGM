#include<stdio.h>
#include<string.h>

int main(){
    char str1[50];
    int i , len, flag = 0;

    printf("Enter a string: ");
    scanf("%s",&str1);

    len = strlen(str1);

    for(i = 0; i < len; i++){
        if(str1[i] != str1[len - i - 1]){
            flag = 1;
            break;
        }
    } 

    if(flag == 1){
        printf("%s is not a Pallindrome \n",str1);
    }

    else{
        printf("%s is a Pallindrome \n",str1);
    }

    return 0;
}