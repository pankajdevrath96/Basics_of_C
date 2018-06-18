//
//  greatest between n.c
//  class work
//
//  Created by Pankaj Devrath on 8/17/17.
//  Copyright © 2017 Pankaj Devrath. All rights reserved.
//
#include <math.h>
#include <stdio.h>
int main()
{
   int i,j,k,x,y,m,l;
    
    scanf("%d%d%d",&i,&j,&k);
   /* while(i&&j&&k)
    {
        i--;j--;k--;
        l++;
    }
    printf("%d",l);*/
   
    
    
    /*l=(i/j)?i:j;
    l=(l/k)?l:k;
    printf("%d",l);
    */
    
    
    
    m=i;
    l=i;
    x=i>>(j-1);
    y=l>>(k-1);
    if(x==y)
    
    {   m=m;
        
    }
    else if((x&1)==1)
    {
        m=m-pow(2,(j-1))+pow(2,(k-1));
        
        
    }
    else if((y&1)==1){
        m=m+pow(2,(j-1))-pow(2,(k-1));
    }
    printf("%d\n",m);
     
    
    
    /*l=i<<1+i+i>>1;
    
    printf("%f\n",l);*/

    
    
    
}
