//
//  swapping of 2 number.c
//  class work
//
//  Created by Pankaj Devrath on 8/2/17.
//  Copyright © 2017 Pankaj Devrath. All rights reserved.
//

#include <stdio.h>

void swap(int,int);

int main()
{
    int x, y ;
    printf("enter two number\n");
    scanf("%d%d",&x,&y);
    
    swap(x,y);
    return 0;
}
void swap(int x,int y)
{
    int temp;
    temp=x;
    x=y;
    y=temp;
    printf("a=%d\nb=%d\n",x,y);
}
