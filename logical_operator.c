#include<stdio.h>

int main(){
    int physics,math,english;
    float total;
    printf("enter marks\n");
    scanf("%d",&physics);
    printf("enter marks\n");
    scanf("%d",&math);
    printf("enter marks\n");
    scanf("%d",&english);
    total=(physics+math+english)/3;
    if(total<40 || physics<33 || math<33 || english<33){
        printf("total percentage is %.2f you are failed\n",total);
    }else{
        printf("total percentage is %.2f you are passed\n",total);
    }
    return 0;
}