//
//  NMST.c
//  class work
//
//  Created by Pankaj Devrath on 7/31/17.
//  Copyright © 2017 Pankaj Devrath. All rights reserved.
//

#define f(x) ((x*x*x)-(4*x)-9)

#include <stdio.h>
#include <math.h>
int main()
{
    float x,a=2,b=3;
    while(fabs(a-b)>0.0001)
    {
        x=(a+b)/2;
        if(f(x)<0)
        {
            a=x;
        }
        else
        {
            b=x;
        }
        
    }
     printf("a=%f\n",a);
     printf("b=%f\n",b);
    printf("root =%f\n",x);
}
