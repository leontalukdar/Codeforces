#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int n,m,a,b,res,div,mod;
    cin>>n>>m>>a>>b;
    div = floor(b/m);
    mod = n%m;
    if(div < a)
    {
        res = (n/m)*b;
        if((mod)*a<=b)
        {
            res += mod*a;
        }
        else
            res += b;
    }
    else
        res = n*a;
    cout<<res<<endl;
    return 0;
}
