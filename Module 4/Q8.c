//This is a program to interchange the principal and secondary diagonal elements in a 2D matrix
/*Since for a principal diagonal to be defined exactly the number of rows should be equal to
number of rows,we consider a square matrix*/

#include <stdio.h>
#define max 100

int main()
{   
    int r,i,j,d[max][max],x;
    
    printf("Enter the number of rows and columns in the matrix:");
    scanf("%d",&r);
    
    printf("Enter the elements of the matrix:");
    for(i=0;i<r;i++)
    {
        for(j=0;j<r;j++)
        scanf("%d",&d[i][j]);
    }
    
    printf("The initial matrix is:\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<r;j++)
        printf("%d ",d[i][j]);
        printf("\n");
    }
    
    for(i=0;i<r;i++)
    {
        j=i;
        
        x=d[i][j];
        d[i][j]=d[i][(r-j)-1];
        d[i][(r-j)-1]=x;
    }
    
    printf("The updated matrix is:\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<r;j++)
        printf("%d ",d[i][j]);
        printf("\n");
    }
    
    return 0;
}
