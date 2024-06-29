#include<stdio.h>

int main(){
    int age;
    int vip = 0;
    vip = 1;
    printf("Enter Your Age\n");
    scanf("%d",&age);

    if((age<90 && age>18) || vip==1){
        printf("You can Drive");
    }else{
        printf("You can not drive");
    }
    return 0;
}