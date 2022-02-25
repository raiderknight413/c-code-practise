#include <stdio.h>
#define max 100

int main()
{   
    int a[max],s,i,j,e;
    
    printf("Enter the size of the array:");
    scanf("%d",&s);
    
    printf("Enter the elements of the array:\n");
    for(i=0;i<s;i++)
    scanf("%d",&a[i]);
    
    printf("The original array is:\n");
    for(i=0;i<s;i++)
    printf("%d ",a[i]);
    
    printf("\nEnter the element to be searched:");
    scanf("%d",&e);
    
    for(i=0;i<s;i++)
    {                         //linear search
        if(a[i]==e)
        {
            printf("%d is present at location %d of the array.",e,i+1);
            break;
        }
    }
    if(i==s)
    printf("The element %d is not present in the array.",e);
    
    return 0;
}
