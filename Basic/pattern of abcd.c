

#include <stdio.h>

int main()
{
    int i,j,k,l,m,s;
    char ch;
    printf("enter the character=");
    scanf("%c",&ch);
    j=ch;
    s=j-65;
    for(i=65;i<=j;i++)
    {
        for(k=65;k<=65+(j-i);k++)
        {
            printf("%c",k);
        }
        for(l=1;l<2*(i-65);l++)
        {
            printf(" ");
        }
        
        k=k-1;
       if(i==65)
        {
            for(m=k-1;m>=65;m--)
            {
                printf("%c",m);
            }
        }
        else
        {
        for(m=k;m>=65;m--)
        {
            printf("%c",m);
        }
       }
        
        printf("\n");
    }

    return 0;
}
