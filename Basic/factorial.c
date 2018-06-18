//
//  factorial.c
//  class work
//
//  Created by Pankaj Devrath on 8/4/17.
//  Copyright © 2017 Pankaj Devrath. All rights reserved.
//

#include <stdio.h>

int main()
{
    int x, fact=1;
    scanf("%d",&x);
    while(x>0)
    {
        fact=fact*x;
        x=x-1;
    }
    printf("%d\n",fact);
    return 0;
}
