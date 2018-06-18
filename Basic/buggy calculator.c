#include <stdio.h>
#include <math.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t>0)
        {
        long long int a,b;
        //int p[15];
        long long int x=0,y=0,z,i=0,sum=0;
        scanf("%lld %lld",&a,&b);
        
        while(a>0||b>0)
            {
            x=a%10;
            y=b%10;
            z=x+y;
            if(z>9)
                z=z%10;
            sum=sum+(z*pow(10,i));
            i++;
            a/=10;
            b/=10;
            }
        
        printf("%lld",sum);
        t--;
        }
    return 0;
}

