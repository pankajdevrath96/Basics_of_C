//
//  pallindrome.c
//  class work
//
//  Created by Pankaj Devrath on 7/31/17.
//  Copyright © 2017 Pankaj Devrath. All rights reserved.
//

#include <stdio.h>
#include <math.h>
int main( )
{
    int x,y,z,n,g,h=0,m,s=0,j=1,i=1;
    scanf("%d",&x);
    y=x;
    g=z=(x*x);
    
        while(x>0)
    {
        n=x%10;
        s=(s*i)+n;
        i = i*10;
        x=x/10;
        
    }
   
    
    while(z>0)
       {
           m=z%10;
           h=(h*j)+m;
           j= j*10;
           z=z/10;
           
       }
    
    if(s==y&h==g)
    {
        printf("number is super pallindrome\n");
    }
    
    
    else
        
    {
        printf("number is  not super pallindrome\n");
    }
    
    
return 0;
}
