//
//  swap 1st and last number.c
//  class work
//
//  Created by Pankaj Devrath on 8/9/17.
//  Copyright © 2017 Pankaj Devrath. All rights reserved.
//

#include <stdio.h>
#include <math.h>
int main()

{
    int count=0,j,l=1,f=0,x,s=0,i=1;
    long long n,a[10],m=0,sum;
    scanf("%lld",&n);
    /*while(n>0)
    {
        x=n%10;
        a[i]=x;
        l=a[1];
        i++;
        n=n/10;
    }
    i--;
    j = a[i];
    a[i]=l;
    a[1]=j;
    while(i>0)
    {
        printf("%d",a[i]);
        i--;
    }
    printf("\n");
    */
    while(n>0)
    {
        x=n%10;
        n=n/10;
        if(i==1)
        {
            m=x;
        }
        
        else if(n==0)
        {
            j =x;
        }
        else{
            s=s+(x*l);
            l=l*10;
            
            
        }
        f++;
        i++;
    }
    f=f-2;
    sum=m*(pow(10,f))+s;
    sum=sum*10 + j;
    printf("%lld",sum);
    printf("\n");
    
    return 0;
    
}
