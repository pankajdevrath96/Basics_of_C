//
//  bits rotation.c
//  class work
//
//  Created by Pankaj Devrath on 9/2/17.
//  Copyright © 2017 Pankaj Devrath. All rights reserved.
//

#include <stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t>0)
    {
        t--;
        int n,d;
        scanf("%d %d",&n,&d);
        printf("%d\n",((n>>d)|n<<(16-d)));
        printf("%d",((n<<d)|n>>(16-d)));
    }
}
