#include <stdio.h>

int main()
{   
    int N;
    scanf("%d",&N);
    
    int arr[N];
    printf("Enter array elements:\n");

    for(int i=0;i<N;i++)
    {
       scanf("%d",&arr[i]);
    }
    
    int rev[N];
    for(int j=N-1;j>=0;j--)
    {
        rev[j]=arr[(N-1)-j];
    }
    
    for(int k=0;k<N;k++)
    {
        printf("%d\t",rev[k]);
    }
    return 0;
}
