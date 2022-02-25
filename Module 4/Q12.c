#include <stdio.h>
#define max 100

int main()
{   
    int r,c,a[max][max],t[max][max],i,j;
    
    scanf("%d",&r);//number of rows
    scanf("%d",&c);//number of columns
    
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        scanf("%d",&a[i][j]); //entering elements of array
    }
    
    printf("The original matrix is:\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        printf("%d ",a[i][j]);//printing original matrix
        printf("\n");
    }
    
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)//finding transpose
        t[j][i]=a[i][j];
    }
    
    printf("The transpose of the matrix is:\n");
    for(i=0;i<c;i++)
    {
        for(j=0;j<r;j++)
        printf("%d ",t[i][j]);//printing transpose matrix
        printf("\n");
    }
    
    return 0;
}
