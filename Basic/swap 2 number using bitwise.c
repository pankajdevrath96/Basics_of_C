//
//  swap 2 number using bitwise.c
//  class work
//
//  Created by Pankaj Devrath on 7/31/17.
//  Copyright © 2017 Pankaj Devrath. All rights reserved.
//

#include <stdio.h>

int main()
{
    int x,y,z;
    scanf("%d%d",&x,&y);
    z=x^y;
    x=z^x;
    y=z^y;
    printf("x=%d\ny=%d\n",x,y);

    return 0;
}
