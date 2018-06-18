//
//  test 2nd.c
//  class work
//
//  Created by Pankaj Devrath on 8/16/17.
//  Copyright © 2017 Pankaj Devrath. All rights reserved.
//

#include <stdio.h>
#include <math.h>
int main()
{
   /* int x;
    scanf("%d",&x);
    int y=65+x;
    for (int i=y;i>=65;i--){
        for(int j=y-1;j>=65+(y-i);j--)
        {
            printf("%c",j);
        }
        printf("\n");
    }*/
    
    
    
  
        /* Enter your code here. Read input from STDIN. Print output to STDOUT */
        int x,y,m=0,z;
        scanf("%d%d",&x,&y);
        int l,k;
        l=sqrt(x);
        k=sqrt(y);
        for(int i=l;i<=k;i++)
        {   m++;
            
        }
    m--;
        printf("%d",m);
}


