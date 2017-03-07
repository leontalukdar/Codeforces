#include <iostream>

using namespace std;

int main()
{
    long int n,x,Count,div;
    cin>>n>>x;
    if(n>x)
        Count = 0;
    else
        Count = 0;
    for(int i=1;i<=n;i++)
    {
        if(x%i==0)
        {
            div = x/i;
            if(div<=n)
                Count++;
        }
    }
    cout<<Count<<endl;
    return 0;
}
