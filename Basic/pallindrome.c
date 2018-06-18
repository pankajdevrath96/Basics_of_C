//
//  pallindrome.c
//  class work
//
//  Created by Pankaj Devrath on 8/4/17.
//  Copyright © 2017 Pankaj Devrath. All rights reserved.
//

#include <stdio.h>
int main()
{
    int x, m, i=1,rev=0, l;
    scanf("%d",&x);
    l=x;
    while(x>0)
    {
        m=x%10;
        rev=(m*i)+rev;
        i=i*10;
        x=x/10;
        
    }
    if(rev==l)
    {
        printf("number is pallindrome\n");
    }
    else
        printf("not pallindrome\n");
    return 0;
}
