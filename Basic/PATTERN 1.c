//
//  PATTERN 1.c
//  class work
//
//  Created by Pankaj Devrath on 9/7/17.
//  Copyright © 2017 Pankaj Devrath. All rights reserved.
//

#include <stdio.h>
int main()
{
    int n,j,g;
    scanf("%d",&n);
    g=n;
    for(int i=n;i>0;i--)
    {
        for(j=g;j>(n-i);j--)
        {
            printf("%d",j);
            if(j==(n-i)+1)
            {
                
            }
            else
                printf(" ");
            
        }
        
        printf("\n");
    }
}
