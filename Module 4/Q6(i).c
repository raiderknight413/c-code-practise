#include <stdio.h>
#define max 100

int main()
{   
    int a[max],s,i,j,x;
    
    printf("Enter the size of the array:");
    scanf("%d",&s);
    
    printf("Enter the elements of the array:\n");
    for(i=0;i<s;i++)
    scanf("%d",&a[i]);
    
    printf("The original array is:\n");
    for(i=0;i<s;i++)
    printf("%d ",a[i]);
    
    printf("\nThe array after sorting in ascending order is:\n");
    for(i=0;i<s-1;i++)
    {
        for(j=0;j<s-i-1;j++)
        {
            if(a[j]>a[j+1])
            {
                x=a[j];       //bubble sort
                a[j]=a[j+1];
                a[j+1]=x;
            }
        }
    }
    
    for(i=0;i<s;i++)
    printf("%d ",a[i]);
    
    return 0;
}
