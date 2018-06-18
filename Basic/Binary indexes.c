#include<stdio.h>

int main()
{
    long int n;
    scanf("%ld",&n);
    long long int a[n],i,j;
    for(i=1;i<=n;i++)
        scanf("%lld",&a[i]);
    long long int k,m;
    scanf("%lld",&k);
    for(j=0;j<k;j++)
        {
        
        scanf("%lld",&m);
        long long x,y,c=0;
        scanf("%lld %lld",&x,&y);
        switch (m)
            {
                case 0:
                a[x]=y;
                break;
                case 1:
                for(i=x;i<=y;i++)
                    {if((a[i]%2)==0)
                        { c++;}
                    }
                printf("\n%lld",c);
                break;
                case 2:
                for(i=x;i<=y;i++)
                    { if((a[i]%2)!=0)
                        {c++;}
                    }
                
                printf("\n%lld",c);
                break;
                
                
            }
        
        }
    return 0;
    
}


