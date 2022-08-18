#include<stdio.h>
void frequ(int a[],int b[],int size);
int main()
{
    int b[50],i,size;
    int a[50];
    printf("Enter the numbers");
    scanf("%d",&size);
    printf("\nEnter the elements");
    for(i=0;i<size;i++)
    scanf("%d",&a[i]);
    frequ(a,b,size);
    return 0;
}
void frequ(int a[],int b[],int size)
{
    int i,j,c=0;
    for(i=0;i<size;i++)
    {
        c=1;
        if(a[i]!=1)
        {
            for(j=i+1;j<size;j++)
            {
           if(a[i]==a[j])
           {
               c++;
               a[j]=-1;
           }
      }
            b[i]=c;
     }
}
   for(i=0;i<size;i++)
    {
    if(a[i]!=-1)
    {
        printf("No of %d is %d\n",a[i],b[j]);
    }
   }

    }

