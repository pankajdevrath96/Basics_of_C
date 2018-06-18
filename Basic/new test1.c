//
//  new test1.c
//  class work
//
//  Created by Pankaj Devrath on 8/17/17.
//  Copyright © 2017 Pankaj Devrath. All rights reserved.
//

#include <stdio.h>
#include <math.h>
int main()
{
    int x,y,c=0;
    scanf("%d%d",&x,&y);
    for(int l=x;l<=y;l++)
    { c=0;
        for(int m=2;m<=l/2;m++)
        {
            if((l%m)==0)
            {
                int d;
                float q;
                d=sqrt(m);
                q=sqrt(m);
                {
                    if(d==q)
                    {
                        c=1;
                    }
                }
                
            }
        }
        if(c==0)
        {
            printf("%d\n",l);
        }
    }
    
}
