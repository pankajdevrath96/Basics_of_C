//
//  binary to decimal.c
//  class work
//
//  Created by Pankaj Devrath on 8/5/17.
//  Copyright © 2017 Pankaj Devrath. All rights reserved.
//

#include <stdio.h>

int main()
{
    int n,x,i=1,num=0;
    printf("enter the binary number=");
    scanf("%d",&n);
    while(n>0)
    {
        x=n%2;
        if(x==1)
        {
            num=num+i;
        }
        i=i*2;
        n=n/10;
        
    }
    printf("%d\n",num);
    return 0;
}
