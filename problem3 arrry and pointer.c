#include<stdio.h>
int main()
{
    int a[5]= {1,2,3,4,9};
    for(int i=0; i<5; i++)
    {
        int* p=&a[i];
        printf("%p = ",p);
        printf("%d\n",*p);
    }
    return 0;
}
