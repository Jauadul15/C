#include<stdio.h>

int main(){
    int i,n;
    printf("Enter the value\n");
    scanf("%d",&n);
    for ( i = n; i ; i--)
    {   
        if(i==4)
        break;
        printf("the value is %d\n",i);
    }
    
    return 0;
}