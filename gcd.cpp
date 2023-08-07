#include <iostream>
using namespace std;
int main()
{
    int a=23,b=46,n;
    
    int ans=1;
    n=min(a,b);

    for(int i=n;i>=1;i--)
    {
        if (a%i==0 and b%i==0 )
        {
            ans=i;
            break;
        }
        
    }
    cout<<ans;
    return 0;
}