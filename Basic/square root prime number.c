#include <stdio.h>
#include <math.h>
int main(void)
{
    // your code goes here
    int x=2,i,j=0, count =0,m=1;
    
    while(j!=100)
    {
        count=0;
        for(i=2;i<=sqrt(x);i++)
        {
            if((x%i)==0)
            {
                count =1;
                break;
            }
            
        }
        if(count==0&&x!=1)
        {
            printf("%d number is %d\n",m,x);
            m++;
            j++;
        }
        x++;
        
    }
    return 0;
}
