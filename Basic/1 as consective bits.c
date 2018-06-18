//
//  1 as consective bits.c
//  class work
//
//  Created by Pankaj Devrath on 8/9/17.
//  Copyright © 2017 Pankaj Devrath. All rights reserved.
//

#include <stdio.h>
int main()
{
    int n,x=0,y,count=0,m,i;
    scanf("%d",&n);
    
    for(i=1;i<=n;i++)
    {
        m=i;
        while(m>0)
        {
            y=m;
            x=m>>1;
            if((x&y)==1)
            {
                count++;
            }
            
            m=m>>1;
        }
    }
    printf("%d\n",count);
}
