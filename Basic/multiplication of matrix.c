//
//  multiplication of matrix.c
//  class work
//
//  Created by Pankaj Devrath on 8/6/17.
//  Copyright © 2017 Pankaj Devrath. All rights reserved.
//

#include <stdio.h>
int main()
{
    int i,j,k,l,m,n,o,p;
    printf("enter the order of 1st matrix=");
    scanf("%d%d",&i,&j);
    printf("enter the order of 2st matrix=");
    scanf("%d%d",&k,&l);
    int a[i][j],b[k][l],c[j][k];
    if(j==k)
    {
        printf("enter the 1st matrix");
        for(m=0;m<i;m++)
        {
            for(n=0;n<j;n++)
            {
                scanf("%d",&a[m][n]);
            }
        }
        printf("enter the 2nd matrix");
        for(m=0;m<k;m++)
        {
            for(n=0;n<l;n++)
            {
                scanf("%d",&b[m][n]);
            }
        }
        printf("multiplication of matrix is :\n");
        for(m=0;m<j;m++)
        {
            for(n=0;n<k;n++)
            {
                c[m][n]=12;
                printf("%d",c[m][n]);
            }
            printf("\n"); 
        }
    }
    else
    {
        printf("this order matric can't be multiplied");
    }
    return 0;
}
