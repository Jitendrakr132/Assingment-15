#include<stdio.h>
int sortN(int a[]);
int main()
{
    int a[10];
    int i;
    printf("Enter the numbers");
    for(i=0;i<=9;i++)
        scanf("%d",&a[i]);
    printf("\n");
    sortN(a);
    for(i=0;i<=9;i++)
        printf("%d ",a[i]);
    return 0;

}
int sortN(int a[])
{
    int i,j,t;
    for(i=0;i<=9;i++)
    {
        for(j=i+1;j<=9;j++)
        {
            if(a[i]>a[j])
            {
            t=a[i];
            a[i]=a[j];
            a[j]=t;
            }
        }
    }
    return a;
}
