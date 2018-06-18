#include <stdio.h>
int main()
{
    int n,s,temp = 0,i,j;
    scanf("%d",&n);
    int a[100];
    for( i=0;i<n;i++)
         scanf("%d",&a[i]);
    for(i=0;i<n-1;i++)
    {   temp=i;
        for(j=i+1;j<n;j++)
            if(a[temp]>a[j])
                temp=j;
            s=a[temp];
            a[temp]=a[i];
            a[i]=s;
    }
    for( i=0;i<n;i++)
        printf("%d ",a[i]);
        return 0;
}
