#include <stdio.h>
#define max 100

int main()
{   
    int r,c,d[max][max],i,j,s=0;
    
    scanf("%d",&r);//number of rows
    scanf("%d",&c);//number of columns
    
    if(r!=c)
    printf("The matrix is not a square matrix.");//invalid case
    
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)       //taking elements of matrix from user
        scanf("%d",&d[i][j]);
    }
    
    printf("The diagonal elements of the matrix are:\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            if(i==j)
            {
                printf("%d",d[i][j]); //printing the diagonal elements
                s=s+d[i][j];   //finding their sum
            }
            
            else
            printf("\t");
        }
        printf("\n");
    }
    printf("The sum of the diagonal elements is:%d",s);
    
    return 0;
}
