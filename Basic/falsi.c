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
    printf("REGULA-FALSI METHOD\n");
    float x,a=2,b=3,s,d,c;
    
    
    while(fabs(a-b)>0.0001)
    {
        s=f(a);
        d=f(b);
        x=((a*d)-(b*s))/(d-s);
           
        if(f(a)*f(x)<0)
        {
            a=x;
            
        }
        else
        {
            b=x;
        }
        

    }
    printf("a=%f\nb=%f\n",a,b);
    printf("root = %f\n",x);
}
