#include <stdio.h>
#define max 100

int main()
{   
    int a[max],s,i,j,x,min;
    
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
        min=i;
        for(j=i+1;j<s;j++)
        {
            if(a[j]<a[min])
            min=j;
        }
                                //selection sort 
        x=a[i];
        a[i]=a[min];
        a[min]=x;
    }
    
    for(i=0;i<s;i++)
    printf("%d ",a[i]);
    
    return 0;
}
