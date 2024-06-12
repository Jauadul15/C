#include<stdio.h>

int main(){
    float celsius, fahrenheit;      

    printf("Enter Celsius :\n");
    scanf("%f",&celsius);

    fahrenheit = (9.0/5.0 *celsius)+32;

    printf("The celsius of %.2f  fahrenheit is %.2f",celsius,fahrenheit);
    return 0;
}