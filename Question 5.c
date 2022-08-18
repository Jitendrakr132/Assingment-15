#include<stdio.h>
void duplicat(int a[],int size);
int main()
{
    int a[]={3,4,5,3,2,4,6,7,2,7};
        duplicat(a,10);
    return 0;
}
void duplicat(int a[],int size)
{
    int i,j;

    for(i=0;i<size;i++)
    {
        for(j=i+1;j<size;j++)
        {
            if(a[i]==a[j])
            {
            printf("%d ",a[j]);
            }
        }
    }
}

