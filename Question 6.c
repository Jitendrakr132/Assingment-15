#include<stdio.h>
void revs(int a[],int size);
int main()
{
    int a[]={10,20,30,50,60};
    revs(a,5);
    return 0;
}
void revs(int a[],int size)
{
    int i,temp;
    for(i=0;i<size/2;i++)
    {
        temp=a[i];
        a[i]=a[size-i-1];
        a[size-i-1]=temp;
    }
    for(i=0;i<size;i++)
        printf("%d ",a[i]);
    }

