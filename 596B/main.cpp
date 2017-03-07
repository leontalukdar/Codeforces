#include <iostream>

using namespace std;
#define ll long long
int main()
{
    ll n,step=0,cur=0;
    cin>>n;
    ll ar[n+1];
    for(int i=0;i<n;i++)
        cin>>ar[i];
    for(int i=0;i<n;i++)
    {
        step+=abs(ar[i]-cur);
        cur=ar[i];
    }
    cout<<step<<endl;
    return 0;
}
