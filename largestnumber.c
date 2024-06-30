#include<stdio.h>

int main(){
        int numberOne,numberTwo,numberThree,numberFour;
        printf("Enter your Number");
        scanf("%d %d %d %d",&numberOne,&numberTwo,&numberThree,&numberFour);
        int largest=numberOne;

        if(numberTwo>largest){
            largest=numberTwo;
        }
        if(numberThree>largest){
            largest=numberThree;
        }
        if(numberFour>largest){
            largest=numberFour;
        }
        printf("%d is the largest number",largest);
    return 0;
}