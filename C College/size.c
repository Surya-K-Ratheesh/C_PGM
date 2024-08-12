#include<stdio.h>

int main(){
    int i;
    float f;
    char c;
    double d;

    printf("Size of int = %zu bytes \n",sizeof(i));
    printf("Size of float = %zu bytes \n",sizeof(f));
    printf("Size of char = %zu byte \n",sizeof(c));
    printf("Size of double = %zu bytes \n",sizeof(d));

    return 0;
}