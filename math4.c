#include<stdio.h>

int main(){
    int principle,interest_rate,time;

    printf("Enter the Principle Amount :");
    scanf("%d",&principle); 

    printf("Enter the  Amount of interest_rate:");
    scanf("%d",&interest_rate);

    printf("Enter the time :");
    scanf("%d",&time);  

    int simpleInterest = (principle*interest_rate*time)/100;

    printf("In This %d taka interest rate in %d with the period of %d year = %d",principle,interest_rate,time,simpleInterest);
    return 0;
}