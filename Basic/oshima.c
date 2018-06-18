#include<stdio.h>
int main()
{
    int i,j,k,l,m,n = 0,o,d=1;
    float a,b,c,e;
    scanf("%d %f",&i,&a);
    m=a/7;
    b=a/7;
    if(m==b)
    {
        j=4;
    }
    else
        j=5;
    printf(" s   m   t   w   t   f  s\n");
    for(k=1;k<=j;k++)
    {
        for(l=1;l<=7;l++)
        {
            if(k==1)
            {for(n=1;n<=i;n++)
            {
                printf(" ");
            }}
            for(o=(n-1);o<=7&& (d<=a);o++)
            {
                printf("%d  ",d);
                d++;
            }
            printf("\n");
        }
        
        
    }
    
}
