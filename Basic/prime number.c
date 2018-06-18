#include <stdio.h>
/*int main(void)
{
    // your code goes here
    int x,i,j, count =0,l,m;
    scanf("%d%d",&x,&l);
    for(j=1;j<=x;j++)
    {
        count=0;
        for(i=2;i<=(j/2);i++)
            {
            if((j%i)==0)
            {
                count =1;
                
                break;
            }
            
            }
        if(count==0&&j!=1)
        {
            printf("%d\n",j);
        }
        
       /* if(count==0&&j!=1)
        {
            k++;
            if(k==m)
            {
                printf("%d",j);
                break;
            }
        }*/
        
  //  }
    //return 0;
//}
void output(int a[9],int n)
{
    for(int i=0;i<n;i++)
    {
        printf("%d",a[i]);
    }
}
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
}
    output(a,n);
}
