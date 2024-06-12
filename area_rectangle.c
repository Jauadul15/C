#include<stdio.h>

int main(){
    int length,breadth;
    
    printf("What is the area of Length \n");
    scanf("%d",&length);

    printf("What is the area of breadth \n");
    scanf("%d",&breadth);

    int areaRectangle = length * breadth;

    printf("total Area of rectangle is %d",areaRectangle);
    return 0;
}