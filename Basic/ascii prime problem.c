#include <stdio.h>

int main()
{
    int t,m,q=1, len, sm=0,la=0,count=0,x[100];
    int length;
    char s[510];
    scanf("%d",&t);
    for(int k=65;k<=122;k++)
    {
        count=0;
        for(int l=2;l<=(k/2);l++)
        {
            if((k%l)==0)
            {
                count =1;
                
                break;
            }
            
        }
        if(count==0&&k!=1)
        {
            x[q]=k;
            //printf("%d\n",x[q]);
            q++;
        }
        
    }
    len=q-1;
    for(int i=1;i<=t;i++)
    {
        
        scanf("%d",&length);
        scanf("%s",s);
        for(int j=0;j<length;j++)
        {
            m=s[j];
          /*  printf("%d\n",m);
            printf("%c\n",m); */
            
            for(int e=1;e<=len;e++)
            {
                if(m>x[e])
                {
                    sm=x[e];
                }
                if(m<x[e])
                {
                    la=x[e];
                    break;
                }
                
            }
            
            if(la<=67)
            {
                printf("%c",la);
            }
            else if((sm-m)>=(m-la))
            {
                printf("%c",sm);
            }
            else if((sm-m)<(m-la))
            {
                printf("%c",la);
            }
            
            
        }
    }
    printf("\n");
    return 0;
}
