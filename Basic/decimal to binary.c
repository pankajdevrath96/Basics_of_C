//
//  binary to decimal and reverse.c
//  class work
//
//  Created by Pankaj Devrath on 8/4/17.
//  Copyright © 2017 Pankaj Devrath. All rights reserved.
//

#include <stdio.h>

int main()
{
    int x, n,a[1000], i=1,sum=0;
    printf("enter a decimal number=");
    scanf("%d",&n);
    while(n>0)
    {
        x=n%2;
        x=x*i;
        sum =x+sum;
        // a[i]=x;
        //i++;
        i=i*10;
        n=n/2;
        
    }
    i--;
    /*while(i>0)
    {
        printf("%d",a[i]);
        i--;
    }*/
    
    printf("%d",sum);
    printf("\n");
    return 0;
}
