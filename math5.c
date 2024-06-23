#include<stdio.h>

int main(){
    int a,b;
    printf("Enter a Number \n");
    scanf("%d",&a);
    if(a%2==0){
        printf("%d is Even",a);
    }else{
        printf("%d is odd",a);
    }
    return 0;
}