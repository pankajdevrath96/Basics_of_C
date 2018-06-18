//
//  integer is power of 2 or not!.c
//  class work
//
//  Created by Pankaj Devrath on 7/31/17.
//  Copyright © 2017 Pankaj Devrath. All rights reserved.
//

#include <stdio.h>
#include <math.h>

int main()
{
    int n,i=0,x,y;
    
    scanf("%d",&n);
    
    y=n;
    while(n>0)
    {
        n=n>>1;
        i++;
        
    }
    i=i-1;
    x= pow(2,i);
    if(x!=y)
    {
        printf("number is not power the of 2\n");
        
    }
    else
    {
        printf("number is in the power of 2\n");
    }
}
