#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int n,j;
    long long a,b;
    cin>>n;
    while(n--)
    {
        cin>>a;
        b=sqrt(a);
        for(j=2; j*j<=b; j++)
        {
            if(b%j==0)
                break;
        }
        if(j*j>b && b*b==a && a>1)
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
}
