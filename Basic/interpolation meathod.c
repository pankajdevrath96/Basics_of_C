//
//  interpolation meathod.c
//  class work
//
//  Created by Pankaj Devrath on 9/18/17.
//  Copyright © 2017 Pankaj Devrath. All rights reserved.
//

#include <stdio.h>
int main()
{
    int n;
    printf("Enter the number of x=");
    scanf("%d",&n);
    
    float x[n],y[n],m[n];
    int i,j,k,q=1;
    for(i=0;i<n;i++)
    {
        printf("enter the value of y w.r.t. x[%d]=",i);
        scanf("%f",&y[i]);
        
    }
    for(i=1;i<=n;i++)
    {
        k=1;
        for(j=k;j<n;j++)
        {
        
        m[j]=y[j]-y[j-1];
            printf("\nvalue of y[%d] in %d iteration is =%.2f",j,q,m[j]);
        }
        for(j=1;j<n;j++)
        {
            
            y[j-1]=m[j];
            
        }
        
          n--;k=1;
        
        if(i==0)
        {
            printf("\n");
            break;
        }
        q++;
        i=i-1;
    }
}
