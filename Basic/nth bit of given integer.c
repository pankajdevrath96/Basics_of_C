//
//  nth bit of given integer.c
//  class work
//
//  Created by Pankaj Devrath on 7/27/17.
//  Copyright © 2017 Pankaj Devrath. All rights reserved.
//

#include <stdio.h>
int main()
{
    int x,y,n;
    /*
    printf("enter decimal number\n");
    scanf("%d",&x);
    while(x>0)
    {
        a[i]=x%2;
        x=x/2;
        i++;
    }
    
    scanf("%d",&y);
    printf("%d\n",a[y]);*/
    
    
    
    
    //2nd meathod
    printf("Enter a decimal number\n");
    scanf("%d",&x);
    printf("Enter the bit number\n");
    scanf("%d",&n);
    y=x>>(n-1);
    if((y&1)==1)
    {
        printf("Value of %d bit is = 1\n",n);
        
    }
    else
    {
        printf("value of %d bit is 0\n",n);
    }
    
    return 0;
}
