#include <stdio.h>
#define max 100

int main()
{   
    int s,a[max],i,j,f,fr[max];
    
    scanf("%d",&s);//size of the array
    
    for(i=0;i<s;i++)
    {
        scanf("%d",&a[i]);//elements of array
        
        fr[i]=1;//initializing frequency array
    }
    
    for(i=0;i<s;i++)
    {
        f=1;
        for(j=i+1;j<s;j++)  //counting the frequency
        {
            if(a[i]==a[j])
            {
                f++;
                
                fr[j]=0;
            }
        }
        
        if(fr[i]!=0)
        fr[i]=f;
    }
    
    printf("The frequency of all elements of an array:\n");
    for(i=0;i<s;i++)
    {
        if(fr[i]!=0)
        printf("%d occurs %d times\n",a[i],fr[i]);
    }
    
    
    return 0;
}
