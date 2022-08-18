#include<stdio.h>
void unquieE(int a[],int suze);
int main()
{
    int a[]={10,20,20,20,50,50,70};
    unquieE(a,7);
    return 0;
}
void unquieE(int a[],int size)
{
    int i,j,count;
    for(i=0;i<size;i++)
    {
        count=0;
        for(j=0;j<size;j++)
        {
            if(i!=j)
            {
                if(a[i]==a[j])
                {
                    count++;
                }
            }
        }
        if(count==0)
            printf("%d ",a[i]);
    }
}

