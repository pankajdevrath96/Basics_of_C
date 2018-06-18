#include <stdio.h>
long int fact(int);
int main()
{
    long int t;
    scanf("%ld",&t);
    while(t--)
        {
        int n;
        long k;
        scanf("%d",&n);
        k=  fact( n);
        k/=1000000007;
        printf("%ld",k);
        }
    return 0;
}
long fact(int n)
{
    if (n >= 1)
        return n*fact(n-1);
    else
        return 1;
}
