#include <stdio.h>
#define max 100

int main()

{
    int s,i,n[max],t[max],r[max],num=0;
    
    printf("Enter the amount of numbers to be studied:");
    scanf("%d",&s);
    
    for(i=0;i<s;i++)
    {
        scanf("%d",&n[i]);
        
        t[i]=n[i];
    }
    
    for(i=0;i<s;i++)
    {
        r[i]=0;
        
        while(n[i]>0)
        {
            r[i]=(r[i]*10)+(n[i]%10);
            n[i]=n[i]/10;
        }
        
        if(t[i]==r[i])
        num++;
    }
    printf("The number of palindromes entered is %d",num);
    
    return(0);
}