//
//  gauss seidal.c
//  class work
//
//  Created by Pankaj Devrath on 8/21/17.
//  Copyright © 2017 Pankaj Devrath. All rights reserved.
//

#define f(z,y) (17+(2*z)-y)/20
#define g(x,z) (-18+z-3x)/20
#define h(x,y) (25-2x+3y)/20

#include <stdio.h>

int main()
{
    
    float x=0,y=0,z=0,a,b,c;
    a=f(z,y);
    x=a;
    b= g(x,z);
    y=b;
    c= h(x,y);
    z=c;
    printf("%f %f %f\n",x,y,z);
    while(x!=0&&y!=0&&z!=0)
    {
        a=f(z,y);
        b=g(x,z);
        c=h(x,y);
        if(x==a && y==b && z==c)
        {
            printf("Value of x= %.2f.\nValue of y= %.2f.\nValue of z= %.2f.\n");
            break;
            
        }
        else
            x=a;
        y=b;
        z=c;
        
    }
    
    
    
    
    
    return 0;
}
