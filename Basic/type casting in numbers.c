//
//  type casting in numbers.c
//  class work
//
//  Created by Pankaj Devrath on 8/14/17.
//  Copyright © 2017 Pankaj Devrath. All rights reserved.
//

#include <stdio.h>
int main()
{
    /*float x;
    double y;
    scanf("%f",&x);
    printf("size of float is=%d\n",sizeof(x));
   s
    y=(double)x;
    printf("size of double is=%d\n",sizeof(y));
    */
    
    float x;
    double y;
    scanf("%f",&x);
    
    
    
    y=(double)x;
    printf("the double value of %f float is= %lf\n",x,y);
    printf("size of float is=%d\n",sizeof(x));
    printf("size of double is=%d\n",sizeof(y));
    
    return 0;
}
