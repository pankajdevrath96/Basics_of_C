#include <stdio.h>

int main(void) {
    // your code goes here
    int a,i=1;
    int s[100];
    scanf("%d",&a);
    while(a>0)
    {
        s[i]=a%8;
        a=a/8;
        i++;
        
    }
    i=i-1;
    while(i>0)
    {
        printf("%d",s[i]);
        i--;
    }
    printf("\n");
    
    
    // 2nd meathod#include <stdio.h>
    
        

    
    printf("2nd meathod\n");
    int n;
    int sum =0,r,j=1;
    scanf("%d",&n);
    while(n>0)
    {
        r=n%8;
        sum= sum+(r*j);
        n=n/8;
        j=j*10;
    }
    printf("%d\n",sum);
    return 0;
}

