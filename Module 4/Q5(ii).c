//binary search
//assuming or asking the user to input sorted array

#include <stdio.h>
#define maximum 100

int main()
{   
    int a[maximum],s,i,e,max,min,mid;
    
    printf("Enter the size of the array:");
    scanf("%d",&s);
    
    printf("Enter the elements of the array in ascending or descending order:\n");
    for(i=0;i<s;i++)
    scanf("%d",&a[i]);
    
    printf("The original array is:\n");
    for(i=0;i<s;i++)
    printf("%d ",a[i]);
    
    printf("\nEnter the element to be searched:");
    scanf("%d",&e);
    
    min=0;
    max=s-1;
    mid=(max+min)/2;
    
    while(min<=max)
    {
        if(a[mid]<e)
        min=mid+1;
        else if(a[mid]==e)
        {
            printf("The element %d is present at the location %d of the array.",e,mid+1);
            break;
        }
        else
        max=mid-1;
        
        mid=(min+max)/2;
    }
    if(min>max)
    printf("The element %d is not present in the array.",e);
    
    return 0;
}
