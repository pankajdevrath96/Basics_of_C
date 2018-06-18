//
//  consucative sum.c
//  class work
//
//  Created by Pankaj Devrath on 8/17/17.
//  Copyright © 2017 Pankaj Devrath. All rights reserved.
//

#include <stdio.h>
int main()
{
    int x,sum=0,z=0,l;
    scanf("%d",&x);
    int m=x/2;
    if((x%2)!=0)
    {
        printf("numbers are=%d and %d\n",m,m+1);
    }
    else
    {
        for(int i=1;i<=m;i++)
        { l=i;
            sum=0;
            while(sum<x)
            {
                sum=sum+l;
                l++;
            }
            if(sum==x)
            {
                printf("yes\n");
                z=1;
                break;
            }
            else
            {
                 z=2;
                
            }
            
            
        }
        
        if(z==2)
        {
            printf("no\n");
        }
    }
    
}
