//This is a program showing 2D matrix addition and multiplication
/*For addition of matrices the number of rows and columns of both the matrices has to be same
and for multiplication the number of columns of first matrix should be equal to the number of
rows of the second matrix,to accomodate these conditions in a single program we limit the 
addition and multiplication to square matrices only*/

#include <stdio.h>
#define max 100

int main()
{
    int r,c,m1[max][max],m2[max][max],i,j,k,x,m_a[max][max],m_m[max][max];
    
    printf("Enter the number of rows and columns in the matrices:");
    scanf("%d",&r);
    
    c=r;
    
    printf("Enter the elements of the first matrix:\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        scanf("%d",&m1[i][j]);
    }
    
    printf("Enter the elements of the second matrix:\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        scanf("%d",&m2[i][j]);
    }
    
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            m_a[i][j]=m1[i][j]+m2[i][j];
            
            x=0;
            for(k=0;k<c;k++)
            {
                x=x+m1[i][k]*m2[k][j];
                m_m[i][j]=x;
            }
            
        }
        
    }
    
    printf("The sum of two matrices is:\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        printf("%d ",m_a[i][j]);
        printf("\n");
    }
    
    printf("The product of two matrices is:\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        printf("%d ",m_m[i][j]);
        printf("\n");
    }
    
    return 0;
}
