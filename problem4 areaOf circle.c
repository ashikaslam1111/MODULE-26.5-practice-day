#include<stdio.h>
float circleAria( float* x);
int main()
{
    float R;
    scanf("%f",&R);
    float area = circleAria(&R);
    printf("\n%.2f",area);
    return 0;
}
float circleAria(float* x)
{
    float areaaa;
    float pie=3.1416;
    float r=*x;
    areaaa=(pie*r*r);
    return areaaa;
}
