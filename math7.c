#include<stdio.h>

int main(){
    char ch;
    printf("enter your alphabet\n");
    scanf("%c",&ch);
    if(ch>=97 && ch<=122){
        printf("this is  lowercase\n");
    }else{
        printf("This is not lowercase\n");
    }
    return 0;
}