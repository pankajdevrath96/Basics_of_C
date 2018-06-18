
//
//  rev fibinacci.c
//  class work
//
//  Created by Pankaj Devrath on 8/9/17.
//  Copyright © 2017 Pankaj Devrath. All rights reserved.
//

#include <stdio.h>

int main()
{
    int n,x=0,y=1,i,sum1,sum2;
    printf("enter the number upto you want to print the series\n");
    scanf("%d",&n);
    while(y<=n)
    {
        
        i=x;
        x=y;
        y=x+i;
        
    }
    sum1=n-x;
    sum2=y-n;
    if(sum1<sum2)
    {
        y=x;
        x=i;
    while(y>0)
    {
        printf("%d\n",y);
        i=y-x;
        y=x;
        x=i;
    }
    }
    else
    {
        
        while(y>0)
        {
            printf("%d\n",y);
            i=y-x;
            y=x;
            x=i;
        }
    }
    return 0;
    
}
