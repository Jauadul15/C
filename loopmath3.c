#include<stdio.h>

int main(){
    int multiplier=10;
    int sum=0;
    printf("Multiplication of %d\n",multiplier);
    for (int i =1; i<=10; i++)
    {   
        int allSum = multiplier*i;
        printf("%d x %d = %d\n",multiplier,i,multiplier*i);
        sum+=allSum;
    }
    printf("all sum = %d",sum);
    
    return 0;
}