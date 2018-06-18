//
//  trating zeros.c
//  class work
//
//  Created by Pankaj Devrath on 7/26/17.
//  Copyright © 2017 Pankaj Devrath. All rights reserved.

#include <stdio.h>
int main()
{
    int x,n,z=0;
    scanf("%d",&x);
    while(x>0)
    {
        n=x%10;
        x=x/10;
        if(n==0)
        {
            z++;
        }
        else
        {
            break;
        }
    }
    printf("%d\n",z);
    return 0;
}
