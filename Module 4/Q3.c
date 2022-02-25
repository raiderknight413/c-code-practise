#include <stdio.h>
#define max 100

int main()
{
    int size,sum[max],i,j,k;
    
    scanf("%d",&size);
    
    if(size<=1)
    return 0;
    
    for(i=0;i<size;i++)
    scanf("%d",&sum[i]);
    
    int max1=0;
    int max2=size-1;
    
    for(j=0,k=size-1;j<size;j++,k--)
    {
        if(j!=max2 && sum[j]>sum[max1])
        max1=j;
        
        if(k!=max1 && sum[k]>sum[max2])
        max2=k;
    }
    
    printf("The sum of the largest pair of numbers is:%d",sum[max1]+sum[max2]);
    
    return 0;
}
