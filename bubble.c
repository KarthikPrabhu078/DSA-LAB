#include<stdio.h>
int main()
{
    int a[50],n,i,j,temp;
    printf("Enter the size of an array: ");
    scanf("%d",&n);
    printf("Enter the %d elements: \n",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("\n------SORTING------\n");
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]>a[j])
            {
                temp=a[j];
                a[j]=a[i];
                a[i]=temp;
            }
        }
    }
    printf("\nArray after sorting: \n ");
    for(i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }
    return 0;
}