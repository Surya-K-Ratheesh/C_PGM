#include<stdio.h>
#include<math.h>

void arsq(int a, int ar);
int arcir(int ar, int r);
float arrec(float l, float b, float are);

int main(){
    char sh;
    int a, r, ar;
    float l, b, are;

    printf("Enter required shape(c - circle, s - square, r - rectangle): ");
    scanf("%c", &sh);

    if(sh == 's'){
        printf("Enter side: ");
        scanf("%d",&a);
        arsq(a, ar);   
    }

    else if(sh == 'r'){
        printf("Enter Length: ");
        scanf("%f", &l);
        printf("Enter Breadth: ");
        scanf("%f", &b);

        printf("Area of rectangle is %f", arrec(l, b, ar));
    }

    else if (sh == 'c'){
        printf("Enter radius: ");
        scanf("%d", &r);

        printf("Area of circle is = %d", arcir(ar, r));
    }

    return 0;

}

void arsq(int a, int ar){
    ar = pow(a,2);
    printf("Area of square = %d \n", ar);
}

int arcir(int ar, int r){
    ar = 3.14*r*r;
    return ar;
}

float arrec(float l, float b, float are){
    are = l * b;
    return are;
}