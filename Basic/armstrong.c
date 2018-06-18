//
//  armstrong.c
//  class work
//
//  Created by Pankaj Devrath on 7/31/17.
//  Copyright © 2017 Pankaj Devrath. All rights reserved.
//
#include <math.h>
#include <stdio.h>
int main()
{
    int x,n,sum=0,y;
    scanf("%d",&x);
    y=x;
    while(x>0)
    {
        n=x%10;
        sum = sum + pow(n,3);
        x=x/10;

    }
    if(sum==y)
    {
        printf("number is armstrong\n");
        
    }
    else
    {
        printf("number is not armstrong\n");
    }
    return 0;
    
}
