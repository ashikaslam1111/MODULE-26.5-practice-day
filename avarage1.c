#include<stdio.h>
int main()
{
    float n;
    float m;
    scanf("%f",&n);
    scanf("%f",&m);
    float* p;
    float* q;
    p=&n;
    q=&m;
    printf("\n%.2f",(*p+*q)/2);
    return 0;
}
