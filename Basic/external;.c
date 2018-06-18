//
//  external;.c
//  class work
//
//  Created by Pankaj Devrath on 11/20/17.
//  Copyright © 2017 Pankaj Devrath. All rights reserved.
//

#include <stdio.h>
#include <string.h>
void rev(char a[50])
{
    int i,j=0;
    // printf("%s", a);
    char b[50];
    int n=strlen(a);
    for(i= n-1;i>=0;i--)
        {
        b[j]=a[i];
        j++;
        
        }
    printf("%s\n", b);
}


int main()
{
    char a[50];
    gets (a);
    rev(a);
    return 0;
}
