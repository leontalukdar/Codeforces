#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    long long int l,r,k,res=1;
    cin>>l>>r>>k;
    while(1)
    {
        if(res>=l)
            cout<<res<<" ";
        if((r/k)>=res)
            res*=k;
        else
            break;

    }
    if(res<l)
        cout<<-1<<endl;
    return 0;
}
