#include<stdio.h>
int sumld(int a[],int len);
int main()
{
    int arr[5]= {110,24,50,35,40};
    int ld=sumld(arr,5);
    printf("%d",ld);
    return 0;
}
int sumld(int a[],int len)
{
    int sum=0;
    int* p;
    for(int i=0; i<5; i++)
    {p=&a[i];
        if(*p%10==0)
        {
            sum=sum+ *p;
        }
    }
    return sum;
}
