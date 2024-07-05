#include<stdio.h>
float force(float mass);
int main(){
    float m;
    printf("enter the mass in kg\n");
    scanf("%f",&m);
    printf("the value of force in newton=%.2f",force(m));
    return 0;
}
float force(float mass){
    float force=mass*9.8;
    return force;
}



