#include<stdio.h>

int main(){
    char c;
    printf("Enter a character: ");
    scanf("%c",&c);

    if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u'){
        printf("Its a VOWEL \n");
    } 

    else if (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U'){
        printf("Its a VOWEL \n");
    }

    else{
        printf("Its a CONSONENT \n");
    }

    return 0;
}