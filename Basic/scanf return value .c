//
//  bitwise and & operator nth bit.c
//  class work
//
//  Created by Pankaj Devrath on 7/28/17.
//  Copyright © 2017 Pankaj Devrath. All rights reserved.
//

#include <stdio.h>
#include <ctype.h>
int main()
{
    char x[100];
    int a,b;
    
    scanf("%s",x);
    for(int i=0;i<strlen(x);i++)
    {
    if(isdigit(x[i])!=0)
    {
        printf("numeric\n");
    }
        else
        {
            printf("alphabet\n");
        }
    }
    
    //scanf function in if statement
    if(scanf("%d %d",&a,&b)==2)
    {
        printf("yes\n");
    }
    return 0;
}
