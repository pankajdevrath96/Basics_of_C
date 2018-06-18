#include <iostream>
using namespace std;

int main() {
    int n,count;
    cin>>n;
    count=0;
    if(n!=42)
    {
        do
        {
            cout<<n<<endl;
            cin>>n;
            if(n==42)
                count=1;
        }
        while(count==0);
            }
    // your code here
    
    return 0;
}
