#include<stdio.h>
#include<string.h>

int main(){
    char a[100];
    int len, i, flag = 0;

    printf("Enter a string: ");
    scanf("%s",&a);

    len = strlen(a);

    for(i = 0; i < len; i++){
        if(a[i] != a[len - i - 1]){
            flag = 1;
            break;
        }
    }

    if (flag == 1){
        printf("%s is not a Palindrome \n",a);
    }

    else{
        printf("%s is a Palindrome \n",a);
    }

    return 0;
}