#include<stdio.h>
#include<math.h>

#ifndef M_PI
#define M_PI 3.14159265358979323846
#endif

int main(){
    float radius,area,height,volume;
    printf("Enter the radius of the circle: \n");
    scanf("%f",&radius);

    area = M_PI*radius*radius;
    printf("the area of the circle is %.2f\n",area);

    printf("Enter the Height of the cylinder: \n");
    scanf("%f",&height);

    volume = M_PI*radius*radius*height;
    printf("The volume of the cylinder is %.2f",volume);
    return 0;
}