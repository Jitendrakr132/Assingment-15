#include<stdio.h>
#include<conio.h>
void left_rotate(int a[],int n,int size);
void display(int a[],int n);
int main()
{
    int a[5]={32,29,40,12,70};
    left_rotate(a,5,2);
    display(a,5);

}
void left_rotate(int a[],int n,int size)
{
    int i,temp,j,k;
    for(i=0;i<size;i++)
    {
        temp=a[0];
        for(j=0;j<n;j++)
        {
            k=a[j];
            a[j]=a[j+1];
            a[j+1]=k;
        }
        a[n-1]=temp;
    }
}
void display(int a[],int n)
{
    int i;
    for(i=0;i<n;i++)
        printf("%d ",a[i]);
}
