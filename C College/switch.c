#include<stdio.h>

int main(){
    int marks, index;
    printf("Enter marks: ");
    scanf("%d", &marks);

    // index = marks/10;
    switch(marks){
        case 10 : printf("Grade A+ \n");
            break;

        case 9 : printf("Grade A \n");
            break;

        case 8 : printf("Grade B+ \n");
            break;
        
        case 7 : printf("Grade B \n");
            break;

        case 6 : printf("Grade C+ \n");
            break;

        case 5 : printf("Grade C \n");
            break;

        default : printf("Enter correct marks \n");
    }
        
    return 0;

}