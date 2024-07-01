#include<stdio.h>

int main(){
    // int i,sum=0,n;
    // printf("enter the value\n");
    // scanf("%d",&n);
    // for(i=1;i<=10;i++){
    //     sum +=i;
    // }
    //  printf("total sum = %d\n",sum);
    int i=0,sum=0,n;
    printf("enter nmbr");
    scanf("%d",&n);
    while (i<=n)
    {
        sum+=i;
        i++;
    }
    printf("sum of all = %d",sum);

    return 0;
}