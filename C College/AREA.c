#include<stdio.h>

void arcircle(int r);
int arsquare(int s);
void arrect(int l, int b);

int main(){
    int c,r,s,l,b;
    printf("Choose any one - '1' = Circle, '2' - Square, '3' - Rectangle: ");
    scanf("%d",&c);

    if(c == 1){
        printf("Enter Radius: ");
        scanf("%d", &r);
        arcircle(r);
    }

    else if (c == 2){
        printf("Enter Side: ");
        scanf("%d",&s);

        int f = arsquare(s);
        printf("Area of square of side %d = %d \n",s,f);
    }

    else if(c == 3){
        printf("Enter Length: ");
        scanf("%d",&l);
        printf("Enter Breadth: ");
        scanf("%d",&b);
        
        arrect(l , b);
    }

    else{
        printf("Choose a valid option \n");
    }

    return 0;
}

void arcircle(int r){
    int a = 3.14*r*r;
    printf("Area of circle of radius %d is %d \n",r,a);
}

int arsquare(int s){
    int a = s*s;
    return a;
}

void arrect(int l, int b){
    int a = l * b;
    printf("Area of rectangle = %d \n", a);
}