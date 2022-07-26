#include<stdio.h>

    void pranew237(int praarr237[],int pran237)
    {
        int praindex237 = 0;
        int pramax237=praarr237[0];
        int pramax2237=praarr237[1];
        if (pramax237 < pramax2237)
        {
            int prat237 = pramax237;
            pramax237 = pramax2237;
            pramax2237 = prat237;
            praindex237=1;
        }
        for(int prai237=2;prai237<pran237;prai237++)
        {
            if (praarr237[prai237] > pramax237)
            {
                pramax2237 = pramax237;
                pramax237 = praarr237[prai237];
                praindex237=prai237;
            }
            else if (praarr237[prai237] > pramax2237 && praarr237[prai237] != pramax237)
            {
                pramax2237 = praarr237[prai237];
            }
        }
        for(int prai237=pran237-1;prai237>=praindex237;prai237--)
        {
            praarr237[prai237+1]=praarr237[prai237];
        }
        praarr237[praindex237]=pramax2237;
        praarr237[praindex237+1]=pramax237-pramax2237;
    }

    int main()
    {
        int pran237;
        printf("Enter the size of the array:");
        scanf("%d",&pran237);
        int praarr237[pran237+1];
        printf("Enter the elements of the array:");
        for(int prai237=0;prai237<pran237;prai237++)
        {
            scanf("%d",&praarr237[prai237]);
        }
        pranew237(praarr237,pran237);
        for(int prai237=0;prai237<=pran237;prai237++)
        {
            printf("%d ",praarr237[prai237]);
        }
        return 0;
    }