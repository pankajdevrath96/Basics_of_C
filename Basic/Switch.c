//
//  Switch.c
//  class work
//
//  Created by Pankaj Devrath on 7/28/17.
//  Copyright © 2017 Pankaj Devrath. All rights reserved.
//

#include <stdio.h>
int main()
{
    int x,a,b,c;
    printf("enter 2 number\n");
    scanf("%d%d",&a,&b);
    printf("enter the value of x\nfor multiplication of number press 1\nfor division press 2\nfor modulus press 3\n");
    scanf("%d",&x);
    switch (x) {
        case 1:
            c=a*b;
            printf("%d\n",c);
            break;
        case 2:
            c=a/b;
            printf("%d\n",c);
            break;
        case 3:
            c=a%b;
            printf("%d\n",c);
            break;
            
        default:
            printf("wrong input\n");
            break;
    }
        
    return 0;
}
