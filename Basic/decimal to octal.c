//
//  decimal to octal.c
//  class work
//
//  Created by Pankaj Devrath on 8/5/17.
//  Copyright © 2017 Pankaj Devrath. All rights reserved.
//

#include <stdio.h>
int main()
{
    int x,n,i=1,sum=0,j;
    printf("enter the decimal number=");
    scanf("%d",&n);
    j=n;
    while(n>0)
    {
        x=n%8;
        x=x*i;
        sum=sum+x;
        i=i*10;
        n=n/8;
    }
    printf("octal number of %d is %d\n",j,sum);

    return 0;
}
