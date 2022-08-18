#include<stdio.h>
int smallestN(int a[]);
int main()
{
 int a[10],i,m;
 printf("Enter the numbers");
 for(i=0;i<=9;i++)
        scanf("%d",&a[i]);
 m=smallestN(a);
 printf("Smallest numbers %d",m);
 return 0;
}
int smallestN(int a[])
{
    int i,min;
    min=a[0];
    for(i=0;i<=9;i++)
    {
        if(min>a[i])
        {
            min=a[i];
        }
    }
    return min;
}
