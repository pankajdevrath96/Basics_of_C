//
//  decimal to hexa.c
//  class work
//
//  Created by Pankaj Devrath on 8/14/17.
//  Copyright © 2017 Pankaj Devrath. All rights reserved.
//

#include <stdio.h>
int main()
{
    int x,n,j=1;
    char sum[100];
    scanf("%d",&n);
    while(n>0)
    {
        x=n%16;
        if(x<10)
        {
            x=x+48;
        }
        else
        {
            x=x+55;
            
        }
        sum[j]=x;
        j++;
        
        n=n/16;
    }
    for(int m=1;m<=j;m++)
    {
    printf("%c\n",sum[m]);
    }
    return 0;
}
