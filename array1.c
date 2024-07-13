#include<stdio.h>

int main(){
    int myArray[]={14,56,42,133,545,6464,543,323,123,667};
    int *ptr=myArray;
    printf("%u====%d",ptr+2,*(ptr+2));
    return 0;
}