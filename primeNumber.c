#include<stdio.h>

int main(){
    int num,count=0;
    printf("enter the value");
    scanf("%d",&num);
    for(int i=2;i<num;i++){
        if(num%i==0)
        {
            count++;
            break;
        }
    }
    if(count==0){
        printf("prime number");
    }else{
        printf("not prime number");
    }
    return 0;
}