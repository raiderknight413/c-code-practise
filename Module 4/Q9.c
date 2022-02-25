#include <stdio.h>
#define max 100

int main()
{   
    int i,j,s1,s2,m1[max],m2[max],m[2*max],x;

    scanf("%d",&s1);//size of first array
    for(i=0;i<s1;i++)
    scanf("%d",&m1[i]);//elements of first array
    
    scanf("%d",&s2);//size of second array
    for(i=0;i<s2;i++)
    scanf("%d",&m2[i]);//elements of second array
    
    for(i=0;i<s1;i++)
    m[i]=m1[i];
    for(j=0;j<s2;j++)//merging both the arrays
    {
        m[i]=m2[j];
        i++;
    }
    
    for(j=0;j<(s1+s2-1);j++)
    {
        for(i=0;i<(s1+s2-j-1);i++)//sorting on descending order
        {
            if(m[i]<m[i+1])
            {
               x=m[i];
               m[i]=m[i+1];
               m[i+1]=x;
            }
        }
    }
    
    printf("The merged array in descending order is:");
    for(i=0;i<s1+s2;i++)
    printf("%d ",m[i]);
    
    return 0;
}
