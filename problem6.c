#include<stdio.h>
void sumld(char a[],int len);
int main()
{
    char  arr[5]="hello";
    sumld(arr,5);
    puts(arr);
    return 0;
}
void sumld(char  a[],int len)
{
    char* p;
    for(int i=0; i<len; i++)
    {
        p=&a[i];
        if(*p%2==0)
        {
            *p= -32+ *p;
        }
    }
}
