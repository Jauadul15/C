#include<stdio.h>

int main(){
    // int i,n,factorial=1;
    // printf("enter the number");
    // scanf("%d",&n);
    // for(i=1;i<=n;i++){
    //     factorial *=i;
    // }
    // printf("%d factorial is %d",n,factorial);
    int i=1,n=3,factorila=1;
    while (i<=n)
    {
        factorila*=i;
        i++;
    }
    printf("%d factorial is %d",n,factorila);
    return 0;
}