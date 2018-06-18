#include <stdio.h>
unsigned int leftshift(int ,int,int,int);
unsigned int rightshift(int ,int,int,int);
int main()
{
    int n,b,m,k,s,q,i=0;
    
    
    scanf("%d %d",&n,&b);
    s=n;
    q=n;
    while(s>0)
    {
        i++;
        s=s/2;
    }
   m=leftshift(n , b,i,q);
    k=rightshift(n,b,i,q);
   printf("leftshift=%d\n",m);
   printf("rightshift=%d\n",k);
}
unsigned int leftshift(int n,int b,int i,int q)
{
    unsigned int z,t;
    t=n<<(32-b);
    z=i-b;
    return (n>>b)|(t>>(32-z-b));
}
unsigned int rightshift(int n,int b,int i,int q)
{
    unsigned int z,t,l;
    l=i-b;
    t=n<<(32-l);
    
    return (n>>l)|(t>>(32-l-b));
}
