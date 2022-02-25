#include <stdio.h>
#define max 100

int main()
{
    int ins[max],size,i,e,p;
    
    scanf("%d",&size);
    
    for(i=0;i<size;i++)
    scanf("%d",&ins[i]);
    
    printf("Enter the element to be inserted:");
    scanf("%d",&e);
    
    printf("Enter the position for the element to be inserted:");
    scanf("%d",&p);
    
    if(p>size+1)
    printf("This position is not valid");
    
    size++;
    
    for(i=size-1;i>=p;i--)
    ins[i]=ins[i-1];
    
    ins[p-1]=e;
    
    printf("The updated array is:");
    
    for(i=0;i<size;i++)
    printf("%d ",ins[i]);
    
    return 0;
}
