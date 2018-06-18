//
//  scjvsaj.c
//  class work
//
//  Created by Pankaj Devrath on 8/22/17.
//  Copyright © 2017 Pankaj Devrath. All rights reserved.
//

#include <stdio.h>

int main()
{
    int i,y,x,j=0;
    scanf("%d",&i);
    while(i>0)
    {
        x=i>>1;
        if((x&1)==1&&(i&1)==0)
        {
            j=1;
                    }
        else if((x&1)==0&&(i&1)==1)
        {
            j=1;
                    }
        
        else
        {
            j=2;
            printf("no\n");
            break;
        }
        
        
        i=i/2;
    }
    if(j==1)
    {
        printf("yes\n");
    }
    

}
