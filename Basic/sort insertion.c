//
//  sort insertion.c
//  class work
//
//  Created by Pankaj Devrath on 9/26/17.
//  Copyright © 2017 Pankaj Devrath. All rights reserved.
//

#include <stdio.h>
int swap (int n , int *a);
int input(int n, int *a)
{
    for(int i=0;i<n;i++)
        scanf("%d",&a[i]);
    return *a;
}
void output (int n, int * a)
{
    for(int i=0;i<n;i++)
        printf("%d\n",a[i]);
    
}

/*int check( int n,int *a)
{
    
    
    return *a;
}
 */


int main()
{
    int n;
    int *a[100];
    scanf("%d",&n);
    input (n, a);
    output (n, a);
   // check( n, a);
    
    
    
}

