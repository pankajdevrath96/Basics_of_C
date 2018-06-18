//
//  nmst ext.c
//  class work
//
//  Created by Pankaj Devrath on 11/21/17.
//  Copyright © 2017 Pankaj Devrath. All rights reserved.


#include <stdio.h>
float f(float);
int main()
{
    int i,j;
    float a,b,c,x=0,integ;
    printf("enter limits a and b then interval c");
    scanf("%f %f %f", &a,&b,&c);
    if(c>b || c==0)
        printf("Invalid Interval");
    else{
        for(i=a,j=0;i<=b;i=i+c,j++)
            {
            if(i==a||i==b)
                 x+=(f(i));
            else if(j%3==0)
                    x+=(2*f(i));
                else
                    x+=3*f(i);
            }
        integ=(3*c/8.0)*x;
        printf("Integral Value=%f",integ);
       
        }
    return 0;
}
float f(float x)
{
    float y=1/(1+(x*x));
    return y;
}
