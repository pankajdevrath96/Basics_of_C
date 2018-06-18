//
//  newton rapson(nmst).c
//  class work
//
//  Created by Pankaj Devrath on 8/20/17.
//  Copyright © 2017 Pankaj Devrath. All rights reserved.
//

#define f(x) ((x*x*x)-(4*x)-9)
#define f1(x) (3*(x*x)-4)

#include <stdio.h>
#include <math.h>
int main()
{
    printf("newton raphson method\n");
    float x,a=2,b=3,s,d,c,q=1;
     x=1;
    
    while(x=0)
    {
        s=f(x)/f1(x);
        d=x-s;
        
        x=d;
       
    }
    printf("%f",x);
    
    
    
}
