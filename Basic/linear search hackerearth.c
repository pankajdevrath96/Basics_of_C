//
//  linear search hackerearth.c
//  class work
//
//  Created by Pankaj Devrath on 10/20/17.
//  Copyright © 2017 Pankaj Devrath. All rights reserved.
//

#include <stdio.h>
int main()
{
    long n;
    scanf("%ld",&n);
    long long a[n],k,i,l;
    for(i=0;i<n;i++)
        {
        scanf("%lld",&a[i]);
        }
    scanf("%lld",&k);
    for(i=0;i<n;i++)
        {
        if(a[i]==k)
            {
            l=i;
            break;
            
            }
        
        }
    printf("%lld",l);
}
