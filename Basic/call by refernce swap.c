//
//  swapping of 2 number.c
//  class work
//
//  Created by Pankaj Devrath on 8/2/17.
//  Copyright © 2017 Pankaj Devrath. All rights reserved.
//

#include <stdio.h>

void swap(int *a,int *b);

int main()
{
    int *x, *y,a,b;
    printf("enter two number\n");
    scanf("%d%d",&a,&b);
    x=&a;
    y=&b;
    
    swap(x,y);
    printf("a=%d\nb=%d\n",*x,*y);
    return 0;
}

void swap(int *a,int *b)
{
    *a=*b+*a;
    *b=*a-*b;
    *a=*a-*b;
    //return *(a,b);

}
