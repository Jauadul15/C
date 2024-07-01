#include<stdio.h>

int main(){
    int multiplier=10;
    printf("Multiplication of %d\n",multiplier);
    for (int i = 10; i; i--)
    {
        printf("%d x %d = %d\n",multiplier,i,multiplier*i);
    }
    
    return 0;
}