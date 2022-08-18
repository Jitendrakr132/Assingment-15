#include<stdio.h>
int greatN(int a[] );
int main()
{
    int a[10],i,m;
    printf("Enter the numbers");
    for(i=0;i<=9;i++)
        scanf("%d",&a[i]);
    m=greatN(a);
    printf("Greatest number %d",m);
    return 0;

}
int greatN(int a[])
{
    int max,i;
    max=a[0];
    for(i=0;i<=9;i++)
    {
        if(max<a[i])
        {
            max=a[i];
        }
    }
    return max;
}
