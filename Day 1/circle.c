#include<stdio.h>
int main(){
    float radius,area,circumference;
    float pi=3.14159;
    printf("Enter the Radius of the Circle:",radius);
    scanf("%f",&radius);
    //area

    area= pi*radius*radius;
    printf("Area of the circle: %f \n",area);

    //circumference
    circumference=2*pi*radius;
    printf("Circumference of the Circle: %f",circumference);
    return 0;
}