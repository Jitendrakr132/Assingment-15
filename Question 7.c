#include<stdio.h>
void countD(int a[],int size );
int main()
{
    int a[]={20,30,40,50,20,30,50,60};
    countD(a,8);
    return 0;

}
void countD(int a[],int size)
{
    int i,j,count=0;
    for(i=0;i<size;i++)
    {
        for(j=i+1;j<size;j++)
        {
            if(a[i]==a[j])
             count++;
            }

    }
    printf("%d",count);
}

