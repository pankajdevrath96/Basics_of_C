//
//  addition of matrix.c
//  class work
//
//  Created by Pankaj Devrath on 8/6/17.
//  Copyright © 2017 Pankaj Devrath. All rights reserved.
//

#include <stdio.h>
int main()
{ int i,j,k,l;
    printf("enter the order of matrix=");
    scanf("%d%d",&i,&j);
    
    int a[i][j],b[i][j],c[i][j];
    for(k=0;k<i;k++)
    {
        for(l=0;l<j;l++)
        {
            printf("element of 1st matrix=");
            scanf("%d",&a[k][l]);
            
            printf("element of 2st matrix=");
            scanf("%d",&b[k][l]);
            
        }
    }
    for(k=0;k<i;k++)
    {
        for(l=0;l<j;l++)
        {
            c[k][l]=a[k][l]+b[k][l];
            
            printf("%d\t",c[k][l]);
        }
        printf("\n");
            }
    
    
    return 0;
}
