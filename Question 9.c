#include<stdio.h>
#include<conio.h>
void merge(int a[],int,int b[],int,int sorted[]);
int main()
{
    int n,m,c;
    int a[50],b[30],sorted[50];
    printf("\n Enter the first array of size:");
    scanf("%d",&n);
    printf("\n Enter the array element:");
    for(c=0;c<n;c++)
        scanf("%d",&a[c]);
    printf("\n Enter the second array size:");
       scanf("%d",&m);
    printf("\n Enter the array element:");
       for(c=0;c<m;c++)
        scanf("%d",&b[c]);
       merge(a,n,b,m,sorted);
       printf("Sorted array:\n");

       for(c=0;c<m+n;c++)
       {
           printf("%d \n",sorted[c]);

       }
    return 0;
}
void merge(int a[],int n,int b[],int m,int sorted[])
{
    int i,j,k;
    j=k=0;
    for(i=0;i<m+n;)
    {
        if(j<m&&k<n)
        {
            if(a[j]<b[k])
            {
            sorted[i]=a[j];
            j++;
            }
            else
            {
                sorted[i]=b[k];
                k++;
            }
            i++;
        }
        else if(j==m)
        {
            for(;i<m+n;)
            {
                sorted[i]=b[k];
                k++;
                i++;
            }
        }
        else
        {
            for(;i<m+n;)
            {
                sorted[i]=a[j];
                j++;
                i++;
            }
        }
    }
}
